#include <iostream>
using namespace std;

int main(){
	
	float precioHoras, TiempoTrabajado, salarioTotal;
	
	cout << "Ingrese el tiempo trabajado: ";
	cin >> TiempoTrabajado;
	cout << "Ingrese el precio por horas: $";
	cin >> precioHoras;

	
	salarioTotal = TiempoTrabajado * precioHoras;
	
	cout << "El salario total del trabajador es: $" << salarioTotal << endl;

	return 0;
	
}
