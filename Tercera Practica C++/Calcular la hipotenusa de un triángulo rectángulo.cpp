#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float Lado_opuesto, Lado_adyacente, hipotenusa;
	
	cout << "Ingrese el valor del lado opuesto: ";
	cin >> Lado_opuesto;
	
	cout << "Ingrese el valor del lado adyacente: ";
	cin >> Lado_adyacente;
	
	hipotenusa = sqrt(pow(Lado_opuesto, 2) + pow(Lado_adyacente, 2));
	
	cout << "La hipotenusa del triangulo rectangulo es: " <<hipotenusa << endl;
	
	return 0; 
}
