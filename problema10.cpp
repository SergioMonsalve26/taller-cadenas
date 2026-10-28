#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cout << "Numero de filas (1 a 15): ";
    cin >> n;

    if (n < 1 || n > 15) {
        cout << "Numero fuera de rango." << endl;
        return 0;
    }

    for (int i = 0; i < n; i++) {
        // Espacios de centrado para la fila actual
        for (int s = 0; s < (n - 1 - i) * 2; s++) {
            cout << " ";
        }

        long long coef = 1;
        for (int k = 0; k <= i; k++) {
            cout << setw(4) << coef;
            // Cálculo del siguiente coeficiente usando la relación solicitada: C(n, k+1) = C(n, k) * (n - k) / (k + 1)
            coef = coef * (i - k) / (k + 1);
        }
        cout << endl;
    }

    return 0;
}
