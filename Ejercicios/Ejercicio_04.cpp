#include <iostream>
using namespace std;
int main(){

    char x;
    cout << "Digite una letra de la a A la Z: " << endl;
    cin >> x;
    switch(x){

    case 'a':
        cout << "Vocal" << endl;
        break;
    case 'e':
        cout << "Vocal" << endl;
        break;
    case 'i':
        cout << "Vocal" << endl;
        break;
    case 'o':
        cout << "Vocal" << endl;
        break;
    case 'u':
        cout << "Vocal" << endl;
        break;
    default:
        cout << "Consonante" << endl;
        break;
    }

    return 0;
}
