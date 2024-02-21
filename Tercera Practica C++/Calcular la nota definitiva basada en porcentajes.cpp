#include <iostream>
using namespace std;

int main(){
	float nota1, nota2, nota3, calificacion;
	const float PorcNota1 = 0.3;
	const float PorcNota2 = 0.3;
	const float PorcNota3 = 0.4;
	
	cout << "Ingrese la primera nota: ";
	cin >> nota1;
	cout << "Ingrese la segunda nota: ";
	cin >> nota2;
	cout << "Ingrese la tercera nota: ";
	cin >> nota3;
	
	calificacion = nota1 * PorcNota1 + nota2 * PorcNota2 + nota3 * PorcNota3;
	
	cout << "La calificacion final es: " <<calificacion <<"%"<<endl;
	
	return 0; 
}
