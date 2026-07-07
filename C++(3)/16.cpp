#include <iostream>
using namespace std;

int particion(int arr[], int inicio, int fin) {
    int pivote = arr[fin];
    int i = inicio - 1;
    for (int j = inicio; j < fin; j++) {
        if (arr[j] <= pivote) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[fin]);
    return i+1;
}

void quickSort(int arr[], int inicio, int fin) {
    if (inicio < fin) {
        int pi = particion(arr, inicio, fin);
        quickSort(arr, inicio, pi-1);
        quickSort(arr, pi+1, fin);
    }
}

void imprimir(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Ingrese tamaño del vector: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Ingrese los elementos:" << endl;
    for (int i = 0; i < n; i++) cin >> arr[i];

    quickSort(arr, 0, n-1);

    cout << "Vector ordenado: ";
    imprimir(arr, n);

    delete[] arr;
    return 0;
}
