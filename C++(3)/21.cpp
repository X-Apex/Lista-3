#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> ordenarParImpar(const vector<int>& arr) {
    vector<int> pares, impares;
    for (int x : arr) {
        if (x % 2 == 0) pares.push_back(x);
        else impares.push_back(x);
    }
    sort(pares.begin(), pares.end()); // ascendente
    sort(impares.begin(), impares.end(), greater<int>()); // descendente

    vector<int> resultado;
    resultado.insert(resultado.end(), pares.begin(), pares.end());
    resultado.insert(resultado.end(), impares.begin(), impares.end());
    return resultado;
}

int main() {
    int n;
    cout << "Ingrese tamaño del vector: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Ingrese los elementos:" << endl;
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> resultado = ordenarParImpar(arr);

    cout << "Vector ordenado: ";
    for (int x : resultado) cout << x << " ";
    cout << endl;

    return 0;
}
