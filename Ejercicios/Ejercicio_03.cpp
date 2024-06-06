#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int cantidadNumeros;
    cout << "Ingrese la cantidad de números a ordenar: ";
    cin >> cantidadNumeros;

    vector<int> numeros(cantidadNumeros); 

    cout << "Ingrese los números:" << endl;
    for (int i = 0; i < cantidadNumeros; ++i) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Opción 1: Burbuja (implementado en tu código original)
     for (int i = 0; i < cantidadNumeros - 1; ++i) {
        for (int j = 0; j < cantidadNumeros - i - 1; ++j) {
             if (numeros[j] > numeros[j + 1]) {
                 swap(numeros[j], numeros[j + 1]); 
            }
         }
     }


    sort(numeros.begin(), numeros.end()); 

    cout << "Números ordenados de menor a mayor:" << endl;
    for (int numero : numeros) {
        cout << numero << " ";
    }
    cout << endl;

    return 0;
}

