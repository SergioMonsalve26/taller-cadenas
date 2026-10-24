#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string frase;
    int vocales = 0, consonantes = 0, digitos = 0, espacios = 0, otros = 0;

    cout << "Ingrese una frase: ";
    getline(cin, frase);

    for (int i = 0; i < frase.length(); i++) {
        char c = tolower(frase[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vocales++;
        } else if (isalpha(c)) {
            consonantes++;
        } else if (isdigit(c)) {
            digitos++;
        } else if (isspace(c)) {
            espacios++;
        } else {
            otros++;
        }
    }

    cout << "Vocales: " << vocales << endl;
    cout << "Consonantes: " << consonantes << endl;
    cout << "Digitos: " << digitos << endl;
    cout << "Espacios: " << espacios << endl;
    cout << "Otros simbolos: " << otros << endl;

    return 0;
}
```[cite: 1]

4. Guarda los cambios presionando las teclas `Ctrl + S` (o `Cmd + S` si estás en Mac).

---

## Paso 5: Guardar el progreso localmente con Git

Vuelve a la terminal que abrimos abajo y escribe estos dos comandos (presionando **Enter** después de cada uno):

1. Para preparar el archivo:
   ```bash
   git add .