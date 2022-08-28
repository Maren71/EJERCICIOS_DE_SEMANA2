#include <iostream>

using namespace std;

int main()
{
	int numero;
	int a, b, c;

	cout << "ingrese un valor: ";
	cin >> numero;

	a = numero / 5;
	b = ((numero - (5 * a)) / 2);
	c = (numero - (5 * a) - (2 * b));

	cout << endl << numero << " equivale a: ";
	cout << endl << a << " monedas de 5 sol";
	cout << endl << b << " monedas de 2 sol";
	cout << endl << c << " monedas de 1 sol";

	system("pause>0");
	return 0;

}
