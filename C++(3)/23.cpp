#include <iostream>
using namespace std;

int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int x, y;
    cout << "Ingrese dos números enteros: ";
    cin >> x >> y;

    cout << "El MCD es: " << mcd(x, y) << endl;
    return 0;
}
