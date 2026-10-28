#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int opcion;
    cout << "1. Comprimir\n2. Descomprimir\nOpcion: ";
    cin >> opcion;
    cin.ignore();

    if (opcion == 1) {
        string cadena;
        cout << "Cadena: ";
        getline(cin, cadena);

        if (cadena.empty()) {
            cout << "Comprimida: " << endl;
            return 0;
        }

        string comprimida = "";
        int i = 0;
        while (i < cadena.length()) {
            char c = cadena[i];
            int count = 0;
            while (i < cadena.length() && cadena[i] == c) {
                count++;
                i++;
            }
            comprimida += c + to_string(count);
        }
        cout << "Comprimida: " << comprimida << endl;

    } else if (opcion == 2) {
        string cadena;
        cout << "Cadena: ";
        getline(cin, cadena);

        string descomprimida = "";
        bool valido = true;
        int i = 0;
        int n = cadena.length();

        while (i < n) {
            if (!isalpha(cadena[i])) {
                valido = false;
                break;
            }
            char c = cadena[i];
            i++;

            if (i >= n || !isdigit(cadena[i])) {
                valido = false;
                break;
            }

            int num = 0;
            while (i < n && isdigit(cadena[i])) {
                num = num * 10 + (cadena[i] - '0');
                i++;
            }

            for (int j = 0; j < num; j++) {
                descomprimida += c;
            }
        }

        if (!valido) {
            cout << "Formato invalido." << endl;
        } else {
            cout << "Descomprimida: " << descomprimida << endl;
        }
    } else {
        cout << "Opcion invalida." << endl;
    }

    return 0;
}
