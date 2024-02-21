#include <iostream>
using namespace std;

int main(){
	int cantidadArticulos;
	float precio;
	cout <<"Ingrese el numero de articulo a comprar: ";
	cin >> cantidadArticulos;
	
	
	
	switch (cantidadArticulos){
		case 1:
		case 2:
		case 3:
			precio =15;
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			precio =11;
			break;
		default:
			precio =10;
			break;
			
	}
	
	cout << "El precio a pagar es: " <<precio << " dolares." <<endl;
	
	return 0;
}
