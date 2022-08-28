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

	cout << endl << "pertenece al primer cuadrante: " << (char)(a * 86 + !a * 70);
	cout << endl << "pertenece al segundo cuadrante: " << (char)(b * 86 + !b * 70);
	cout << endl << "pertenece al tercer cuadrante: " << (char)(c * 86 + !c * 70);
	cout << endl << "pertenece al cuarto cuadrante: " << (char)(d * 86 + !d * 70);

	system("pause>0");
	return 0;
}
