#include <iostream>
using namespace std;

int puntoCalidad(int promedio) {
    if (promedio >= 90 && promedio <= 100) return 4;
    else if (promedio >= 80) return 3;
    else if (promedio >= 70) return 2;
    else if (promedio >= 60) return 1;
    else return 0;
}

int main() {
    int n;
    cout << "Ingrese cantidad de notas: ";
    cin >> n;

    int suma = 0;
    for (int i = 1; i <= n; i++) {
        int nota;
        cout << "Ingrese nota " << i << ": ";
        cin >> nota;
        suma += nota;
    }

    int promedio = suma / n;
    cout << "Promedio: " << promedio << endl;
    cout << "Punto de calidad: " << puntoCalidad(promedio) << endl;

    return 0;
}
