#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std;

struct Producto {
    string nombre;
    double precio;
    int cantidad;
};

struct Compra {
    string nombre;
    double precio;
    int cantidad;
};

double aplicarDescuentoProducto(const Compra &c) {
    double total = c.precio * c.cantidad;
    if (c.precio > 300 && c.cantidad >= 2) {
        int cantidadCobrar = (c.cantidad / 2) + (c.cantidad % 2);
        total = cantidadCobrar * c.precio;
    }
    return total;
}

string generarCodigoCompra() {
    srand(time(0));
    int codigo = rand() % 100000 + 1000;
    return "C" + to_string(codigo);
}

int main() {
    ifstream entrada("productos.txt");
    if (!entrada.is_open()) {
        cerr << "Error al abrir productos.txt" << endl;
        return 1;
    }

    vector<Producto> inventario;
    Producto p;
    while (entrada >> p.nombre >> p.precio >> p.cantidad) {
        inventario.push_back(p);
    }
    entrada.close();

    cout << "===== INVENTARIO DISPONIBLE =====\n";
    for (size_t i = 0; i < inventario.size(); i++) {
        cout << i+1 << ". " << inventario[i].nombre 
             << " | Precio: " << inventario[i].precio 
             << " | Stock: " << inventario[i].cantidad << endl;
    }

    vector<Compra> carrito;
    char opcion;
    do {
        int eleccion, cantidad;
        cout << "\nIngrese el número del producto que desea comprar: ";
        cin >> eleccion;

        if (eleccion < 1 || eleccion > (int)inventario.size()) {
            cout << "Producto inválido.\n";
            continue;
        }

        cout << "Ingrese la cantidad que desea comprar: ";
        cin >> cantidad;

        if (cantidad > inventario[eleccion-1].cantidad) {
            cout << "No hay suficiente stock.\n";
            continue;
        }

        Compra c;
        c.nombre = inventario[eleccion-1].nombre;
        c.precio = inventario[eleccion-1].precio;
        c.cantidad = cantidad;
        carrito.push_back(c);

        cout << "¿Desea comprar otro producto? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    // Pedir nombre del cliente
    string cliente;
    cout << "\nIngrese el nombre del cliente: ";
    cin >> cliente;

    // Generar código de compra
    string codigoCompra = generarCodigoCompra();

    // Crear archivo con nombre personalizado
    string nombreArchivo = "reporte_" + cliente + "_" + codigoCompra + ".txt";
    ofstream reporte(nombreArchivo);

    reporte << fixed << setprecision(2);
    reporte << "===== REPORTE DE COMPRA =====\n\n";
    reporte << "Cliente: " << cliente << endl;
    reporte << "Código de compra: " << codigoCompra << endl << endl;

    double totalCompra = 0;
    for (auto &c : carrito) {
        double subtotal = aplicarDescuentoProducto(c);
        reporte << c.nombre << " | Precio: " << c.precio 
                << " | Cantidad: " << c.cantidad 
                << " | Subtotal: " << subtotal << endl;
        totalCompra += subtotal;
    }

    if (totalCompra > 220) {
        double descuento = totalCompra * 0.10;
        totalCompra -= descuento;
        reporte << "\nDescuento adicional del 10% aplicado: -" << descuento << endl;
    }

    reporte << "\nTOTAL FINAL: " << totalCompra << endl;
    reporte.close();

    cout << "\nCompra realizada. Se generó el archivo: " << nombreArchivo << endl;

    return 0;
}
