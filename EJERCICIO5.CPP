#include <iostream>

using namespace std;

int main()
{
	int hora;
	int a, b;

	cout << "ingrese la cantidad de horas de trabajo: ";
	cin >> hora;

	a = (hora <= 40) * 16 * hora;
	b = (hora > 40) * (16 * 40 + (hora - 40) * 20);

	cout << endl << "su salario es: " << a + b;

	system("pause>0");
	return 0;
}
