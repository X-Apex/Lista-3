#include <iostream>
using namespace std;

void ordenar(int v[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (v[j] > v[j+1]) {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}

void imprimir(int v[], int n) {
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Ingrese tamaño del vector: ";
    cin >> n;

    int* v = new int[n];
    cout << "Ingrese los elementos:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    ordenar(v, n);
    cout << "Vector ordenado: ";
    imprimir(v, n);

    delete[] v;
    return 0;
}
