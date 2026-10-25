#include <iostream>

using namespace std;

int main() {
    int n;
    char c;

    do {
        cout << "Ingrese la altura del rombo (entero impar positivo): ";
        cin >> n;
        if (n <= 0 || n % 2 == 0) {
            cout << "Valor invalido, intente de nuevo." << endl;
        }
    } while (n <= 0 || n % 2 == 0);

    cout << "Ingrese el caracter: ";
    cin >> c;

    int centro = n / 2;

    for (int i = 0; i < n; i++) {
        int distancia = i - centro;
        if (distancia < 0) {
            distancia = -distancia;
        }

        int espacios = distancia;
        int simbolos = n - 2 * distancia;

        for (int s = 0; s < espacios; s++) {
            cout << " ";
        }
        for (int sym = 0; sym < simbolos; sym++) {
            cout << c;
        }
        cout << endl;
    }

    return 0;
}