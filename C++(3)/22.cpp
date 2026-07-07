#include <iostream>
using namespace std;

int invertirNumero(int n) {
    int invertido = 0;
    while (n != 0) {
        int digito = n % 10;
        invertido = invertido * 10 + digito;
        n /= 10;
    }
    return invertido;
}

int main() {
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;

    cout << "Número invertido: " << invertirNumero(numero) << endl;
    return 0;
}
