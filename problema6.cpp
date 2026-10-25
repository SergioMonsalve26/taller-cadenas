#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string password;
    cout << "Ingrese la contrasena: ";
    cin >> password;

    bool tieneMayuscula = false;
    bool tieneMinuscula = false;
    bool tieneDigito = false;
    bool tieneEspecial = false;

    for (int i = 0; i < password.length(); i++) {
        if (isupper(password[i])) {
            tieneMayuscula = true;
        } else if (islower(password[i])) {
            tieneMinuscula = true;
        } else if (isdigit(password[i])) {
            tieneDigito = true;
        } else {
            tieneEspecial = true;
        }
    }

    if (password.length() >= 8 && tieneMayuscula && tieneMinuscula && tieneDigito && tieneEspecial) {
        cout << "Contrasena segura y valida." << endl;
    } else {
        cout << "Contrasena invalida o insegura." << endl;
    }

    return 0;
}