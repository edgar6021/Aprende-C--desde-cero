#include <iostream>
using namespace std;

int main (){
	
	float millas;
	const float Kilometros_por_milla = 1.609;
	
	cout << "Ingrese una cantidad en millas: ";
	cin >> millas;
	
	float kilometros = millas * Kilometros_por_milla;
	
	cout << millas << " millas equivale a " << kilometros << " kilometros " << endl;
	
	return 0;
}
