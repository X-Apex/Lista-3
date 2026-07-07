#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese la cantidad de notas: ";
    cin >> n;

    vector<double> notas(n);
    double suma = 0;

    for (int i = 0; i < n; i++) {
        cout << "Nota " << i+1 << ": ";
        cin >> notas[i];
        suma += notas[i];
    }

    double promedio = suma / n;
    cout << "El promedio de las notas es: " << promedio << endl;

    return 0;
}
