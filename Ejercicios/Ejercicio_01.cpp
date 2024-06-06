#include <iostream>
using namespace std;
int main() {
    int digito;
    bool accesoPermitido = true; 
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese digito " << i + 1 << ": ";
        cin >> digito;
        if (digito != i + 1) {
            accesoPermitido = false; 
            break; 
        }
    }
    if (accesoPermitido) {
        cout << "Acceso Permitido\n";
    } else {
        cout << "Acceso Denegado\n";
    }
    return 0;
}
