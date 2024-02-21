#include <iostream>
using namespace std;

int main() {
    int edad = 12;
    int regalo = 10;
    int cantTotal = regalo;

    cout << "Edad inicial: " << edad << " year" << endl;
    cout << "Regalo inicial: " << regalo << " dolares" << endl;

    do {
        edad++;
        regalo = regalo * 2;
        cantTotal += regalo;

        cout << " " << endl;
        cout << "Edad actual: " << edad << " year" << endl;
        cout << "Regalo duplicado: " << regalo << " dolares" << endl;
        cout << "Cantidad total acumulada: " << cantTotal << " dolares" << endl;
    } while (regalo <= 1000);

    cout << " " << endl;
    cout << "La niña tendrá " << edad << " años cuando se le de la ultima cantidad" << endl;
    cout << "La cantidad total recibida es: " << cantTotal << " dolares" << endl;

    return 0;
}

