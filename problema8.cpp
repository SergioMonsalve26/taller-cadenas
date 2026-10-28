#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Ingrese N (>= 1): ";
    cin >> N;

    if (N < 1) {
        cout << "N invalido." << endl;
        return 0;
    }

    int mejorNumero = 1;
    long long maxPasos = -1;
    long long maxValorGlobal = -1;

    for (int i = 1; i <= N; i++) {
        long long x = i;
        long long pasos = 0;
        long long valorMaximoActual = i;

        while (x != 1) {
            if (x > valorMaximoActual) {
                valorMaximoActual = x;
            }
            if (x % 2 == 0) {
                x = x / 2;
            } else {
                x = 3 * x + 1;
            }
            pasos++;
        }

        if (pasos > maxPasos) {
            maxPasos = pasos;
            mejorNumero = i;
            maxValorGlobal = valorMaximoActual;
        }
    }

    cout << "Numero con la secuencia mas larga: " << mejorNumero << endl;
    cout << "Pasos: " << maxPasos << endl;
    cout << "Valor maximo alcanzado: " << maxValorGlobal << endl;

    return 0;
}
