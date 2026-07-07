#include <iostream>
using namespace std;

bool esSimetrica(int** matriz, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] != matriz[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Ingrese tamaño de la matriz: ";
    cin >> n;

    int** matriz = new int*[n];
    for (int i = 0; i < n; i++) {
        matriz[i] = new int[n];
    }

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    if (esSimetrica(matriz, n)) {
        cout << "La matriz es simétrica" << endl;
    } else {
        cout << "La matriz NO es simétrica" << endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;

    return 0;
}
