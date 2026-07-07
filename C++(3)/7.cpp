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

    // Insertion Sort
    for (int i = 1; i < n; i++) {
        int clave = vector[i];
        int j = i - 1;
        while (j >= 0 && vector[j] > clave) {
            vector[j+1] = vector[j];
            j--;
        }
        vector[j+1] = clave;
    }

    cout << "Vector ordenado: ";
    for (int num : vector) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}