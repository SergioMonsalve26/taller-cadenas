#include <iostream>
#include <string>

using namespace std;

int main() {
    char opcion;
    cout << "Cifrar (C) o descifrar (D): ";
    cin >> opcion;

    long long k;
    cout << "Desplazamiento: ";
    cin >> k;

    cin.ignore(); 
    string mensaje;
    cout << "Mensaje: ";
    getline(cin, mensaje);

    if (opcion == 'D' || opcion == 'd') {
        k = -k;
    }

    long long shift = k % 26;
    if (shift < 0) {
        shift += 26;
    }

    string resultado = "";
    for (int i = 0; i < mensaje.length(); i++) {
        char c = mensaje[i];
        if (c >= 'a' && c <= 'z') {
            char nuevoChar = 'a' + (c - 'a' + shift) % 26;
            resultado += nuevoChar;
        } else if (c >= 'A' && c <= 'Z') {
            char nuevoChar = 'A' + (c - 'A' + shift) % 26;
            resultado += nuevoChar;
        } else {
            resultado += c;
        }
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}
