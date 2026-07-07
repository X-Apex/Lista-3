#include <iostream>
using namespace std;

void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cout << "Ingrese primer valor: ";
    cin >> x;
    cout << "Ingrese segundo valor: ";
    cin >> y;

    intercambiar(x, y);

    cout << "Después del intercambio: x = " << x << ", y = " << y << endl;
    return 0;
}
