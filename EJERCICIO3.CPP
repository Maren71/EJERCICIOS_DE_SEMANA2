#include <iostream>

using namespace std;

int main()
{
	int m;
	int a, b, c;

	cout << "ingrese el numero de neumaticos: ";
	cin >> m;

	a = (m < 3) * 145;
	b = (m >= 3 && m <= 5) * 138;
	c = (m > 5) * 135;

	cout << endl << "el monto a pagar es " << m << " neumaticos: " << (a + b + c) * m;

	system("pause>0");
	return 0;
}
