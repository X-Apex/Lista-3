#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ifstream archivo("estudiantes.txt");
    string linea;
    double sumaGeneral = 0;
    int contadorEstudiantes = 0;

    if (!archivo) {
        cout << "Hecho." << endl;
        return 1;
    }

    while (getline(archivo, linea)) {
        stringstream ss(linea);
        string nombre;
        ss >> nombre; 

        vector<double> notas;
        double nota;
        while (ss >> nota) {
            notas.push_back(nota);
        }

        if (!notas.empty()) {
            double suma = 0;
            for (double n : notas) {
                suma += n;
            }
            double promedio = suma / notas.size();
            cout << nombre << ": promedio = " << promedio << endl;

            sumaGeneral += promedio;
            contadorEstudiantes++;
        }
    }

    archivo.close();

    if (contadorEstudiantes > 0) {
        cout << "Promedio general = " << (sumaGeneral / contadorEstudiantes) << endl;
    } else {
        cout << "No se encontraron datos." << endl;
    }

    return 0;
}
