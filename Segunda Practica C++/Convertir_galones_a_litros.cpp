#include <iostream>
using namespace std;

int main(){
	int galones = 10;
	
	do{
		float litros = galones * 3.785;
		cout << galones << "galones = " << litros << "litros" <<endl;
		galones++;
	}while(galones <= 20);
	
	return 0;
}
