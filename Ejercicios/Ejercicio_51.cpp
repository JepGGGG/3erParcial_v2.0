#include <iostream>
#include <string>
#include <cstring>
#include <vector> // Para almacenar los datos de la factura

using namespace std;

int main() {
    char Usuario_Trabajador[20];
    char Acceso_Sistema[20];
    int intentos = 0;
    char continuarVenta = 's'; 
    struct ItemFactura {
        string nombre;
        float cantidad;
        float precioUnitario;
    };
    string nombreArticulo;
    float precioArticulo, cantidadArticulo;
    
    vector<ItemFactura> factura; 

    do {
        cout << "Ingrese su nombre de usuario: ";
        cin >> Usuario_Trabajador;
        cout << "Ingrese su password: ";
        cin >> Acceso_Sistema;

        if (strcmp(Usuario_Trabajador, "JepG") == 0 && strcmp(Acceso_Sistema, "2b31") == 0) {
            cout << "Bienvenido al sistema!\n\n";

            do {
                float totalVenta = 0.0;
                cout << "\n--- Registro de Venta ---\n";

                factura.clear(); 
                

                do {
                    cout << "Ingrese el nombre del artículo (0 para terminar): ";
                    cin >> nombreArticulo;

                    if (nombreArticulo == "0") {
                        break;
                    }

                    cout << "Ingrese la cantidad del artículo: ";
                    cin >> cantidadArticulo;

                    cout << "Ingrese el precio unitario del artículo: ";
                    cin >> precioArticulo;

                    totalVenta += precioArticulo * cantidadArticulo;

                    
                    factura.push_back({nombreArticulo, cantidadArticulo, precioArticulo});
                } while (true);

                cout << "Total de la venta: $" << totalVenta << endl;

                cout << "Desea continuar con otra venta? (s/1): ";
                cin >> continuarVenta;
            } while (continuarVenta == 's' || continuarVenta == 'S');

            // Imprimir la factura final si se ingresa "1"
            if (continuarVenta == '1') {
                cout << "\n--- Factura Final ---\n";
                for (const auto& item : factura) {
                    cout << "Artículo: " << item.nombre  <<endl;
                    cout << ", Cantidad: " << item.cantidad <<endl;
                    cout << ", Precio Unitario: $" << item.precioUnitario << endl;
                }
            }

            cout << "Gracias por utilizar el sistema\n";
            break;
        } else {
            intentos++;
            cout << "Usuario o password incorrectos, Intentos restantes: " << 3 - intentos << endl;
        }
    } while (intentos < 3);

    if (intentos == 3) {
        cout << "Lo siento, ha superado el numero maximo de intentos permitidos.\n";
        return 0;
    }

    return 0;
}
