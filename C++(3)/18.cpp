#include <iostream>
using namespace std;

int main() {
    int filas, columnas;
    cout << "Ingrese número de filas: ";
    cin >> filas;
    cout << "Ingrese número de columnas: ";
    cin >> columnas;

    int** matriz = new int*[filas];
    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
    }

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cin >> matriz[i][j];
        }
    }

    cout << "Matriz original:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    int f, c, nuevoValor;
    cout << "Ingrese fila y columna a modificar: ";
    cin >> f >> c;
    cout << "Ingrese nuevo valor: ";
    cin >> nuevoValor;

    f--; 
    c--;

    if (f >= 0 && f < filas && c >= 0 && c < columnas) {
        matriz[f][c] = nuevoValor;
    } else {
        cout << "Posición inválida." << endl;
    }

    cout << "Matriz modificada:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    // Liberar memoria
    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}