#include <iostream>
#include <cmath> // Para usar la función pow()

using namespace std;


double calcularPotencia(double base, double exponente) {
    return pow(base, exponente);
}

int main() {
    double base, exponente;

    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese el exponente: ";
    cin >> exponente;

    // Calcular la potencia utilizando la función
    double resultado = calcularPotencia(base, exponente);

    // Mostrar el resultado
    cout << base << " elevado a la " << exponente << " es: " << resultado << endl;

    return 0;
}
