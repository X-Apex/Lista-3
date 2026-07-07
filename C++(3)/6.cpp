#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadena;
    cout << "Ingrese una cadena de caracteres: ";
    cin >> cadena;

    int n = cadena.size();

    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (cadena[j] > cadena[j+1]) {
                char temp = cadena[j];
                cadena[j] = cadena[j+1];
                cadena[j+1] = temp;
            }
        }
    }

    cout << "La cadena ordenada es: " << cadena << endl;
    return 0;
}