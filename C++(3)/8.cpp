#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cout << "Ingrese número de filas (n): ";
    cin >> n;
    cout << "Ingrese número de columnas (m): ";
    cin >> m;

    vector<vector<int>> matriz(n, vector<int>(m));
    vector<vector<int>> transpuesta(m, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    cout << "Matriz transpuesta:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
