#include <iostream>
using namespace std;

int main(){
	int numero;
	cout << "Ingrese un numero entero positivo: ";
	cin >> numero;
	
	int cuadrado = numero * numero;
	int cubo = numero * numero * numero;
	
	cout << "El cuadrado de " << numero << " es: " << cuadrado << endl;
	cout << "El cubo de " << numero << " es: " << cubo << endl;
	
	return 0;
	
}
