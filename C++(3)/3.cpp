#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamaño de la matriz identidad: ";
    cin >> n;

    vector<vector<int>> matriz(n, vector<int>(n, 0));

    // Generar matriz identidad
    for (int i = 0; i < n; i++) {
        matriz[i][i] = 1;
    }

    // Mostrar matriz
    cout << "Matriz identidad de tamaño " << n << ":" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}