#include <iostream>

using namespace std;

int main() {
    int numeros[5];
    int mayor, menor;
    bool hayRepetidos = false;

	
    cout << "Ingrese 5 numeros separados por espacios:\n"; 

    for (int i = 0; i < 5; i++) {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
    mayor = numeros[0];
    menor = numeros[0];

    for (int i = 1; i < 5; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }

        for (int j = 0; j < i; j++) {
            if (numeros[i] == numeros[j]) {
                hayRepetidos = true;
                cout << "Numero repetido: " << numeros[i] << endl;
                break;
            }
        }
    }

    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    if (!hayRepetidos) {
        cout << "No hay numeros repetidos.\n";
    }

    return 0;
}

