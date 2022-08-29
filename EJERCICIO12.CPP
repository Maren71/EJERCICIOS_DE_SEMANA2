#include <iostream>;

using namespace std;

int main()
{
	float precio, oferta_pizza1, oferta_pizza2, oferta_pizza3;
	int tipo;

	cout << "ingrese el tipo de pizza(1:pizza grande, 2:pizza familiar, 3:pizza fiesta): ";
	cin >> tipo;
	cout << "ingrese el precio de la pizza: ";
	cin >> precio;

	oferta_pizza1 = (tipo == 1) * 0.9;
	oferta_pizza2 = (tipo == 2) * 0.85;
	oferta_pizza3 = (tipo == 3) * 0.8;

	cout << endl << "el monto a pagar es: " << (oferta_pizza1 + oferta_pizza2 + oferta_pizza3) * precio;

	system("pause>0");
	return 0;
}
