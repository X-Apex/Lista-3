#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream archivo("productos.txt");
    string nombre;
    double precio;

    if (!archivo) {
        cout << "No se pudo abrir el archivo." << endl;
        return 1;
    }

    while (archivo >> nombre >> precio) {
        if (precio > 999) {
            double precioFinal = precio * 0.8;
            cout << nombre << " | Precio original: " << precio 
                 << " | Precio con descuento: " << precioFinal << endl;
        } else {
            cout << nombre << " | Precio: " << precio 
                 << " | Sin descuento" << endl;
        }
    }

    archivo.close();
    return 0;
}
