#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuario;
    string contrasena;
    int intentos = 0;
    const int MAX_INTENTOS = 3;

    do {
        cout << "Ingrese su usuario: ";
        cin >> usuario;

        cout << "Ingrese su contrasena: ";
        cin >> contrasena;

        if (usuario == "root" && contrasena == "1234") {
            cout << "Bienvenido al sistema" << endl;
            break;
        } else {
            intentos++;
            cout << "Datos incorrectos. Intentos restantes: " << MAX_INTENTOS - intentos << endl;
        }
    } while (intentos < MAX_INTENTOS);

    if (intentos == MAX_INTENTOS) {
        cout << "Lo sentimos, ha superado el número máximo de intentos permitidos." << endl;
    }
    return 0;
}
