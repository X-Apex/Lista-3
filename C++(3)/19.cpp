#include <iostream>
#include <vector>
using namespace std;

// Merge Sort
void merge(vector<int>& arr, int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

void mergeSort(vector<int>& arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

// Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}


void imprimir(const vector<int>& arr) {
    for (int x : arr) cout << x << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Ingrese tamaño del vector: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Ingrese los elementos:" << endl;
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> arrBubble = arr;
    vector<int> arrMerge = arr;

    bubbleSort(arrBubble);
    cout << "Vector ordenado con Bubble Sort: ";
    imprimir(arrBubble);

    mergeSort(arrMerge, 0, n-1);
    cout << "Vector ordenado con Merge Sort: ";
    imprimir(arrMerge);

    return 0;
}
