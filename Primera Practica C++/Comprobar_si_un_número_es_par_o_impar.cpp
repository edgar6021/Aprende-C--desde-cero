#include <iostream>
using namespace std;

int main(){
	int numero;
	
	cout << "Ingresa un numero: ";
	cin >> numero;
	
	if (numero %2==0){
		cout << "El numero es par." <<endl;
		
	}
	else {
		cout << "El numero es impar." << endl;
	}
	return 0;
}
