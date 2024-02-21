#include <iostream>
using namespace std;

int main(){
	int n;
	cout <<"Ingrese la cantidad de numeros: ";
	cin >> n;
	
	int c = 1;
	while (c <= n){
		if(c % 2==0){
			cout <<c <<" es par" <<endl;
		}
		else{
			cout <<c <<" es impar" <<endl;
		}
		c++;
	}
	return 0; 
}
