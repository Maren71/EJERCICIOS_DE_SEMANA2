#include <iostream>

using namespace std;

int main()
{
	int x, y;
	int a, b, c, d;

	cout << "ingrese la abcisa x: ";
	cin >> x;
	cout << "ingrese la ordenada y: ";
	cin >> y;

	a = x > 0 && y > 0;
	b = x < 0 && y > 0;
	c = x < 0 && y < 0;
	d = x > 0 && y < 0;

	cout << endl << "el punto se encuentra en el cuadrante " << (a * 1 + b * 2 + c * 3 + d * 4);

	system("pause>0");
	return 0;
}
