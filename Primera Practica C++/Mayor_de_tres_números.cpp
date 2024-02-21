#include <iostream>
using namespace std;

int main(){
	
	int num1, num2, num3;
	
	cout << "Ingresa el primer numero: ";
	cin >> num1;
	
	cout << "Ingresa el segundo numero: ";
	cin >> num2;
	
	cout << "Ingresa el tercer numero : ";
	cin >> num3;
	
	if (num1 > num2 && num1 > num3){
		cout << "El mayor numeo es: " << num1 << endl;
	}
	else if (num2 > num1 && num2 > num3){
		cout << "El mayor numeo es: " << num2 << endl;
	}
	else if (num3 > num1 && num3 > num2){
		cout << "El mayor numeo es: " << num3 << endl;
	}
	else{
		cout << "Hay un numeros iguales" << endl;
	}
	
	return 0;
}
