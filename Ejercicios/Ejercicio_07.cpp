#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int opcion;
    float area;

    cout << "CALCULAR AREA DE FIGURAS\n";
    cout << "1) Triangulo\n";
    cout << "2) Trapecio\n";
    cout << "3) Rectangulo\n";
    cout << "4) Circulo\n"; 
    cout << "Ingrese su opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1: { 
            float base, altura;
            cout << "Base del triángulo: ";
            cin >> base;
            cout << "Altura del triángulo: ";
            cin >> altura;
            area = base * altura / 2;
            break;
        }
        case 2: { 
            float baseMayor, baseMenor, altura;
            cout << "Base mayor del trapecio: ";
            cin >> baseMayor;
            cout << "Base menor del trapecio: ";
            cin >> baseMenor;
            cout << "Altura del trapecio: ";
            cin >> altura;
            area = (baseMayor + baseMenor) * altura / 2;
            break;
        }
        case 3: { 
            float base, altura;
            cout << "Base del rectángulo: ";
            cin >> base;
            cout << "Altura del rectángulo: ";
            cin >> altura;
            area = base * altura;
            break;
        }
        case 4: { 
            float radio;
            cout << "Radio del círculo: ";
            cin >> radio;
            area = M_PI * pow(radio, 2); 
            break;
        }
        default:
            cout << "Opción no válida\n";
            return 1; 
    }

    cout << "El área de la figura es: " << area << endl; 
    return 0;
}
