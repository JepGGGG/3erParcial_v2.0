#include <iostream>
#include <string>

using namespace std;

// Estructura para representar la información de un empleado
struct Empleado {
    string nombre;
    string puesto;
    float salario;
    string fechaIngreso;
};

int main() {
    Empleado nuevoEmpleado; 

    cout << "Ingrese el nombre del empleado: ";
    getline(cin, nuevoEmpleado.nombre); 

    cout << "Ingrese el puesto del empleado: ";
    getline(cin, nuevoEmpleado.puesto);

    cout << "Ingrese el salario del empleado: $";
    cin >> nuevoEmpleado.salario;

    cin.ignore(); 

    cout << "Ingrese la fecha de ingreso (DD/MM/AAAA): ";
    getline(cin, nuevoEmpleado.fechaIngreso);

    cout << "\n--- Bienvenido al Sistema ---\n\n";
    cout << "Estimado(a) " << nuevoEmpleado.nombre << ",\n";
    cout << "Le damos la bienvenida a la empresa. Su puesto como " << nuevoEmpleado.puesto;
    cout << " ha sido registrado con éxito.\n";
    cout << "Fecha de ingreso: " << nuevoEmpleado.fechaIngreso << endl;
  
    return 0;
}
