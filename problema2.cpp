#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Ingrese a y b (1<=a<=b): ";
    cin >> a >> b;

    // Validación del rango
    if (a < 1 || a > b) {
        cout << "Rango invalido." << endl;
        return 0;
    }

    int perfectos = 0;
    int abundantes = 0;
    int deficientes = 0;

    for (int i = a; i <= b; i++) {
        int sumaDivisores = 0;
        
        // Calcular la suma de los divisores propios (menores que i)
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sumaDivisores += j;
            }
        }

        cout << i << ": ";
        if (sumaDivisores == i) {
            cout << "perfecto (suma de divisores = " << sumaDivisores << ")" << endl;
            perfectos++;
        } else if (sumaDivisores > i) {
            cout << "abundante (suma de divisores = " << sumaDivisores << ")" << endl;
            abundantes++;
        } else {
            cout << "deficiente (suma de divisores = " << sumaDivisores << ")" << endl;
            deficientes++;
        }
    }

    cout << "Perfectos: " << perfectos << ", abundantes: " << abundantes << ", deficientes: " << deficientes << endl;

    return 0;
}