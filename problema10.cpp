#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string texto;
    cout << "Ingrese una cadena de texto: ";
    getline(cin, texto);

    int vocales = 0;
    int consonantes = 0;
    int digitos = 0;
    int espacios = 0;
    int palabras = 0;
    bool enPalabra = false;

    for (int i = 0; i < texto.length(); i++) {
        char c = tolower(texto[i]);

        if (c == ' ' || c == '\t' || c == '\n') {
            espacios++;
            enPalabra = false;
        } else {
            if (!enPalabra) {
                palabras++;
                enPalabra = true;
            }

            if (isdigit(c)) {
                digitos++;
            } else if (isalpha(c)) {
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                    vocales++;
                } else {
                    consonantes++;
                }
            }
        }
    }

    cout << "--- Estadisticas del texto ---" << endl;
    cout << "Palabras: " << palabras << endl;
    cout << "Vocales: " << vocales << endl;
    cout << "Consonantes: " << consonantes << endl;
    cout << "Digitos: " << digitos << endl;
    cout << "Espacios: " << espacios << endl;

    return 0;
}