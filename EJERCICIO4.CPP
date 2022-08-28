#include <iostream>

using namespace std;

int main()
{
	int diametro,ingrediente_extra ;
	float costo_diametro, costo_ingrediente_extra;

	cout << "ingrese el diametro de la pizza: ";
	cin >> diametro;
	cout << "ingrese la cantidad de ingredientes extra: ";
	cin >> ingrediente_extra;
	
	costo_diametro = diametro * 1.5;
	costo_ingrediente_extra = ingrediente_extra * 2.5;

	cout << endl << "el precio de la pizza es: " << costo_diametro + costo_ingrediente_extra;

	system("pause>0");
	return 0;

}
