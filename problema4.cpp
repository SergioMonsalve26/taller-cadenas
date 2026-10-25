#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "Ingrese un entero entre 1 y 3999: ";
    cin >> n;

    if (n < 1 || n > 3999) {
        cout << "El numero esta fuera de rango." << endl;
        return 0;
    }

    int miles = n / 1000;
    int centenas = (n % 1000) / 100;
    int decenas = (n % 100) / 10;
    int unidades = n % 10;

    string romano = "";

    if (miles == 1) romano += "M";
    else if (miles == 2) romano += "MM";
    else if (miles == 3) romano += "MMM";

    if (centenas == 1) romano += "C";
    else if (centenas == 2) romano += "CC";
    else if (centenas == 3) romano += "CCC";
    else if (centenas == 4) romano += "CD";
    else if (centenas == 5) romano += "D";
    else if (centenas == 6) romano += "DC";
    else if (centenas == 7) romano += "DCC";
    else if (centenas == 8) romano += "DCCC";
    else if (centenas == 9) romano += "CM";

    if (decenas == 1) romano += "X";
    else if (decenas == 2) romano += "XX";
    else if (decenas == 3) romano += "XXX";
    else if (decenas == 4) romano += "XL";
    else if (decenas == 5) romano += "L";
    else if (decenas == 6) romano += "LX";
    else if (decenas == 7) romano += "LXX";
    else if (decenas == 8) romano += "LXXX";
    else if (decenas == 9) romano += "XC";

    if (unidades == 1) romano += "I";
    else if (unidades == 2) romano += "II";
    else if (unidades == 3) romano += "III";
    else if (unidades == 4) romano += "IV";
    else if (unidades == 5) romano += "V";
    else if (unidades == 6) romano += "VI";
    else if (unidades == 7) romano += "VII";
    else if (unidades == 8) romano += "VIII";
    else if (unidades == 9) romano += "IX";

    cout << n << " " << romano << endl;

    return 0;
}