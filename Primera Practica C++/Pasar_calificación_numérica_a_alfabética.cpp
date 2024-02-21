#include <iostream>
using namespace std;

int main(){
	int calificacion;


cout << "Ingresa una calificacion menor que 100: ";
cin >> calificacion;

if (calificacion >= 90) {
	cout << "A" << endl;
	
}
else if (calificacion >=80){
	cout << "B" << endl;
}
else if (calificacion >=70){
	cout << "C" << endl;
}
else if(calificacion >=60){
	cout << "D" << endl;
}
else{
	cout << "F" << endl;
}
return 0;
}
