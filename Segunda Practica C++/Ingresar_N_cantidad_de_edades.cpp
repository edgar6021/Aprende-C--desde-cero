#include <iostream>
using namespace std;

int main(){
	
	int n;
	int edad;
	int edadM =edad;
	
	cout << "Ingrese la cantidad de edades: ";
	cin>>n;
	

	cout << "Ingrese la edad 1: ";
	cin >> edad;
	
	
	for(int d = 2; d <=n; d++){
		cout << "Ingrese la edad " << d << ": ";
		cin >> edad;
		
		if (edad > edadM){
			edadM = edad;
		}
	}
	cout << "La edad mayor ingresada es: " <<edadM <<endl;
	
	return 0;
}
