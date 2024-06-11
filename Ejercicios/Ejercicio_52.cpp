//Equipo 9
//Alejandro_ Texto e ingresar datos, diseño, correcion de errores  y julio le ayudó
//Hernan: Repetir el programa para ingresar mas calificaciones
//Efrain: funcion de nota mayor, determinar si el numero es mayor a 10 no es valido
//diego: Solucion de invocar funciones y llego tarde (una hora)
//Julio hizo lo de los porcentajes
//Daniel corregir al momento de que se repetia el programa, marcaba otra cosa que no era




#include <iostream>
using namespace std;

float encontrarMayor(float num1, float num2, float num3) {
    float mayor = num1;
    if (num2 > mayor) {
        mayor = num2; 
    }
    if (num3 > mayor) {
        mayor = num3; 
    }
    return mayor;
}

float promedios(float examen_1, float examen_2, float examen_3) {
  //funcion para sacar promedio "Julio"
    float cal1 = examen_1 * 0.2;
    float cal2 = examen_2 * 0.2;
    float cal3 = examen_3 * 0.6;
    float prom = cal1 + cal2 + cal3;
    return prom;
}

int main() {
    float examen_1, examen_2, examen_3;
    char resp;

    do {
        bool notasValidas = false;

        cout << "Por favor no ingresar numeros mayores a 10" << endl;

        while (!notasValidas) {
            notasValidas = true;

            cout << "Ingrese la nota del examen del primer parcial: ";
            cin >> examen_1;
            
            if (examen_1 > 10 || examen_1 < 0) {
                cout << "No se admiten numeros mayores a 10 ni menores a 0. Intente de nuevo." << endl;
                notasValidas = false;
                continue;
            }
          

            cout << "Ingrese la nota del examen del segundo parcial: ";
            cin >> examen_2;
            if (examen_2 > 10 || examen_2 < 0) {
                cout << "No se admiten numeros mayores a 10 ni menores a 0. Intente de nuevo." << endl;
                notasValidas = false;
                continue;
            }

            cout << "Ingrese la nota del examen del tercer parcial: ";
            cin >> examen_3;
            if (examen_3 > 10 || examen_3 < 0) {
                cout << "No se admiten numeros mayores a 10 ni menores a 0. Intente de nuevo." << endl;
                notasValidas = false;
                continue;
            }
        }

        float promedioFinal = promedios(examen_1, examen_2, examen_3);
        cout << "El promedio es: " << promedioFinal << endl;

        float notaMayor = encontrarMayor(examen_1, examen_2, examen_3);
        cout << "La calificacion mayor es: " << notaMayor << endl;

        do {
            cout << "¿Desea calcular el promedio de otro alumno? "<<endl;
            cout<<"Presione (s) para cerrar el programa"<<endl;
            cin >> resp;
        } while (resp != 'n' && resp != 's'); 

    } while (resp == 'n'); 
    cout << "Fin del programa." << endl;
    return 0;
}
