#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Ingrese la cantidad de edades: ";
	cin >> n;
	
	int suma =0;
	int contador = 0;
	int edad;
	
	while (contador < n){
		cout << "Ingrese una edad: ";
		cin >> edad;
		
		suma += edad;
		contador++;
	}
	
	float promedio = suma / static_cast<float>(n);
	cout << "El promedio de las edades ingresada es: " <<promedio <<endl;
	
    return 0;
}
