#include <iostream>
using namespace std;

int main(){
    int n;
	float promedio, nota1, nota2, nota3;
	char nombre[20];
	

	cout << "Ingrese el numero de estudiantes: ";
	cin >>n;
	
   
	for (int i = 1; i <= n; i++ ){
		
		cout << "Ingrese el nombre del estudiantes "<<i <<": ";
	    cin >>nombre;
		
		cout << "Ingresa la primera nota: "; 
		cin >> nota1; 
		cout << "Ingresa la segunda nota: "; 
		cin >> nota2; 
		cout << "Ingresa la tercera nota: "; 
		cin >> nota3; 
		
		promedio = (nota1 + nota2 + nota3) / 3;
		cout << "El promedio del estudiante "<<i <<": "<<nombre <<" es:  "<<promedio << endl;
	}
	return 0;
}
