#include <iostream>
using namespace std;

int main() {
	int num1,num2,total,divi;

	cout<<"primer numero: ";
	cin>>num1;
	cout<<"segundo numero: ";
	cin>>num2;

	divi=num1%num2;
	total=num1/num2;

	if(divi!=0){
	cout<<" el numero no es divisible" << endl;
	}
	else{
	cout<<"el numero es divisible" << endl;

	cout<<"resultado: "<< total<< endl;

	}
	return 0;
}
