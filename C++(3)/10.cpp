#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese tamaño del vector: ";
    cin >> n;

    // Crear vector dinámico
    int* vector = new int[n];

    // Llenar el vector
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i+1 << ": ";
        cin >> vector[i];
    }

    // Mostrar el vector
    cout << "Contenido del vector: ";
    for (int i = 0; i < n; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;

    // Liberar memoria
    delete[] vector;

    return 0;
}
