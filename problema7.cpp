#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero entero positivo mayor a 1: ";
    cin >> n;

    if (n <= 1) {
        cout << "Numero invalido." << endl;
        return 0;
    }

    cout << "Descomposicion en factores primos: ";
    int divisor = 2;
    bool primero = true;

    while (n > 1) {
        if (n % divisor == 0) {
            if (!primero) {
                cout << " * ";
            }
            cout << divisor;
            n /= divisor;
            primero = false;
        } else {
            divisor++;
        }
    }
    cout << endl;

    return 0;
}