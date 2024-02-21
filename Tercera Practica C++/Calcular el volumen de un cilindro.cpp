#include <iostream>
#include <cmath>
using namespace std;

int main(){
	 string nombre;
	 float radio, altura, volumen, pi;
	 pi=3.14;
	 
	 cout << "Ingrese el nombre del cilidro: ";
	 cin >> nombre;
	 cout << "Ingrese el radio del cilidro: ";
	 cin >> radio;
	 cout << "Ingrese la altura del cilindro: ";
	 cin >> altura; 
	  
	  //V = pi h r²
	 volumen = pi * altura * pow(radio, 2);
	 
	 cout << "El volumen del cilindro " <<nombre << " es: " <<volumen <<endl;
	 return 0; 
}
