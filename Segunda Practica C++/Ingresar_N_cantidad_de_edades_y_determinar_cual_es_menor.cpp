#include <iostream>
using namespace std;

int main(){
	
	int n;
	int edad;
	int edadMenor =edad;
	int contadorIgual = 0;
	
	cout << "Ingrese la cantidad de edades: ";
	cin>>n;
	

	cout << "Ingrese la edad 1: ";
	cin >> edad;
	edadMenor =edad;
	
	
	for(int d = 2; d <=n; d++){
		cout << "Ingrese la edad " << d << ": ";
		cin >> edad;
		
		if (edad <= edadMenor){
			edadMenor = edad;
		
			} else if (edad == edadMenor){
			contadorIgual++;
			}
	}
	cout << "La edad menor ingresada es: " <<edadMenor <<endl;
	
	
	 if (contadorIgual > 0){
		cout << "hay  " <<contadorIgual <<" edades iguales menores" <<endl;
	}
	
	return 0;
}
