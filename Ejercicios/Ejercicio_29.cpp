#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    char Usuario_Trabajador[20];
    char Acceso_Sistema[20];
    int intentos = 0;
    string nombreArticulo;
    float precioArticulo, totalVenta = 0.0;


    do {
        cout << "Ingrese su nombre de usuario: ";
        cin >> Usuario_Trabajador;
        cout << "Ingrese su contraseña: ";
        cin >> Acceso_Sistema;

        if (strcmp(Usuario_Trabajador, "JepG") == 0 && strcmp(Acceso_Sistema, "2b31") == 0) {
            cout << "\n¡Bienvenido al sistema!\n\n";

            cout << "\n--- Registro de Venta ---\n";

            do {
                 cout << "Ingrese el nombre del artículo (o '0' para terminar): ";
                  cin >> nombreArticulo;

               if (nombreArticulo == "0") {
                  break; 
                }

               cout << "Ingrese el precio del artículo: ";
               cin >> precioArticulo;

                totalVenta += precioArticulo; // Acumular el precio en el total

            } while (true); // Continuar hasta que se ingrese 0

           cout << "\nTotal de la venta: $" << totalVenta << endl;
           break;
        } else {
            intentos++;
            cout << "\nUsuario o contraseña incorrectos. Intentos restantes: " << 3 - intentos << endl;
        }

    } while (intentos < 3);

    if (intentos == 3) {
        cout << "Lo siento, ha superado el número máximo de intentos permitidos.\n";
        return 0; 
    }

    return 0;
}
