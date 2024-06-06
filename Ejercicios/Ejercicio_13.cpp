#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un número entero: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << numero << " es un número par." << endl;
    } else {
        cout << numero << " es un número impar." << endl;
    }

    if (numero % 3 == 0) {
        cout << numero << " es divisible entre 3." << endl;
    } else {
        cout << numero << " no es divisible entre 3." << endl;
    }

    return 0;
}
