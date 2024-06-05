#include <iostream>
#include <string>
#include <cstring> // Para strcmp

using namespace std;

int main() {
    char Usuario_Trabajador[20];
    char Acceso_Sistema[20];
    int intentos = 0;

    do {
        cout << "Ingrese su nombre de usuario: ";
        cin >> Usuario_Trabajador;
        cout << "Ingrese su contraseña: ";
        cin >> Acceso_Sistema;

        if (strcmp(Usuario_Trabajador, "JepG") == 0 && strcmp(Acceso_Sistema, "2b321) == 0) {
            cout << "Entraste!\n";
            break;
        } else {
            intentos++;
            cout << "Usuario o contraseña incorrectos. Intentos restantes: " << 3 - intentos << endl;
        }
    } while (intentos < 3);

    if (intentos == 3) {
        cout << "Lo siento, ha superado el número máximo de intentos permitidos.\n";
    }

    return 0;
}
