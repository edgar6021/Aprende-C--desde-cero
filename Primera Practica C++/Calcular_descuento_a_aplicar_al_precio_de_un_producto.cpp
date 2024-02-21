#include <iostream>
using namespace std;

int main(){
	float precio, descuento,  precio_descuento,  itbis, impuesto, impuesto_aplicado,Total;
    float dec30, dec20,dec10,dec5;

cout << "Ingrese el precio del producto: ";
cin >> precio;

itbis = 0.18;
impuesto = precio * itbis;
impuesto_aplicado = precio + impuesto;

if (precio >= 100){
	dec30=0.3;
	descuento = impuesto_aplicado * dec30;
	cout << "Tiene un descuento: "<<dec30 <<"%" <<endl;
}
else if (precio >= 50){
	dec20=0.2;
	descuento = impuesto_aplicado * dec20;
	cout << "Tiene un descuento: "<<dec20 <<"%" <<endl;
}
else if (precio >= 25){
	dec10=0.1;
	descuento = impuesto_aplicado * dec10;
	cout << "Tiene un descuento: "<<dec10 <<"%" <<endl;
}
else if (precio >= 15){
	dec5=0.05;
	descuento = impuesto_aplicado * dec5;
	cout << "Tiene un descuento: "<<dec5 <<"%" <<endl;
}
else{
	descuento = 0;

}


precio_descuento = impuesto_aplicado - descuento ;
Total=precio_descuento;

if (precio < 15){
	    cout << "Descuento aplicado: " <<descuento <<"%" <<endl;
		cout << "Precio sin descuento: $" <<precio_descuento <<endl;
}
else{

cout << "ITBIS: " <<itbis <<"%" <<endl;
cout << "inpuesto aplicado: $" <<impuesto <<endl;
cout << "SubTotal: $" <<impuesto_aplicado <<endl;
cout << "Monto con descuento: $" <<precio_descuento <<endl;
cout << "Descuento aplicado: $" <<descuento <<endl;
cout << "Total a pagar: $" <<Total <<endl;

}

return 0;
}
