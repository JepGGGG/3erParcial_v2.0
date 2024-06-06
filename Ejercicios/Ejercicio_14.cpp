#include <iostream>
using namespace std;

int main() {
    int n1,n2;

    cout << "Ingrese numero 1: ";
    cin >> n1;
    cout << "Ingrese numero 2: ";
    cin >> n2;
   
    if (n1 == n2) {
        cout << n1 << " Y  " << n2 << " son iguales"<< endl;
        
    }  else if (n1 > n2) {
        cout << n1 << " es mayor" << endl;
    } else {
        cout << n2 << "  es mayor" << endl;
    }


    return 0;
}
