#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    vector<int> vector(n);

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> vector[i];
    }

    int mayor = vector[0];
    int menor = vector[0];

    for (int i = 1; i < n; i++) {
        if (vector[i] > mayor) mayor = vector[i];
        if (vector[i] < menor) menor = vector[i];
    }

    cout << "El valor máximo es: " << mayor << endl;
    cout << "El valor mínimo es: " << menor << endl;

    return 0;
}