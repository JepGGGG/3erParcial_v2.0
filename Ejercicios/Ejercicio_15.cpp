#include<iostream>
using namespace std;

int main() {
    int edad, entrada, ndescuento, adescuento;

    entrada = 70;
    cout << "Dime tu edad: ";
    cin >> edad;

    if (edad <= 5) {
        cout << "Tienes un descuento del 60%" << endl;
        ndescuento = entrada * 0.60;
        cout << "El precio de la entrada con descuento seria: " << ndescuento << endl;
    }
    else if (edad >= 60) {
        cout << "Tienes un descuento del 55%" << endl;
        adescuento = entrada * 0.55;
        cout << "El precio de la entrada con descuento seria: " << adescuento << endl;
    }
    else {
        cout << "No tienes descuento" << endl;
    }

    return 0;
}
