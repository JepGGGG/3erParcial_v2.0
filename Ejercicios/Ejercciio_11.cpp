#include <iostream>
using namespace std;

int main(){
    int hora;

    cout << "Ingrese la hora en formato 24h" << endl;
    cin >> hora;

    if (hora>=0 && hora<=24){
        if (hora>=5 && hora<=11){
            cout << "Buenos dias" << endl;
        } else if (hora>=12 && hora<=18){
            cout << "Buenas tardes" << endl;
        } else{
            cout << "Buenas noches" << endl;
        }
    } else{
        cout << "Formato de hora no valida" << endl;
    }

    return 0;
}
