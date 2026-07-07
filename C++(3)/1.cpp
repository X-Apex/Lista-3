#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    vector<int> vector(n);
    int suma = 0;

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> vector[i];
        suma += vector[i];
    }

    cout << "La suma total de los elementos es: " << suma << endl;
    return 0;
}