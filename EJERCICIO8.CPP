#include <iostream>

using namespace std;

int main()
{
	int litros;
	int opcion1, opcion2, opcion3;

	cout << "ingrese el numero de litros consumidos: ";
	cin >> litros;

	opcion1 = (litros <= 50) * (20 + litros*0);
	opcion2 = (litros >=51 && litros <= 200) * (20 + (50 * 0) + ((litros - 50) * 2));
	opcion3 = (litros >= 201) * (20 + (50 * 0) + (150 * 2) + (litros - 200) * 3.5);

	cout << endl << "el monto a pagar es: " << opcion1 + opcion2 + opcion3;

	system("pause>0");
	return 0;
}
