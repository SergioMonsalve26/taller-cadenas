#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    if (n < 0) {
        cout << "Numero invalido." << endl;
        return 0;
    }

    if (n == 0) {
        cout << "Binario: 0" << endl;
        return 0;
    }

    string binario = "";
    int temp = n;

    while (temp > 0) {
        int residuo = temp % 2;
        binario = to_string(residuo) + binario;
        temp /= 2;
    }

    cout << "El numero " << n << " en binario es: " << binario << endl;

    return 0;
}