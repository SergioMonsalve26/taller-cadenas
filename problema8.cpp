#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Ingrese dos numeros enteros positivos: ";
    cin >> a >> b;

    if (a <= 0 || b <= 0) {
        cout << "Numeros invalidos." << endl;
        return 0;
    }

    int tempA = a;
    int tempB = b;

    // Algoritmo de Euclides para el MCD
    while (tempB != 0) {
        int residuo = tempA % tempB;
        tempA = tempB;
        tempB = residuo;
    }

    int mcd = tempA;
    int mcm = (a / mcd) * b;

    cout << "MCD: " << mcd << endl;
    cout << "MCM: " << mcm << endl;

    return 0;
}