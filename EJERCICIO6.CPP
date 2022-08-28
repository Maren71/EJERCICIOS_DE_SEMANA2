#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	int es_triangulo, es_escaleno, es_equilatero, es_isosceles;

	cout << "ingrese a: ";
	cin >> a;
	cout << "ingrese b: ";
	cin >> b;
	cout << "ingrese c: ";
	cin >> c;

	es_triangulo = a + b > c && b + c > a && a + c > b;
	es_escaleno = a != b && c != b && c != a && es_triangulo == 1;
	es_equilatero = a == b && b == c && c == a && es_triangulo == 1;
	es_isosceles = ((a == b && c != a && c != b) || (c == b && a != b && a != c) || (a == c && b != c && b != a) && (es_triangulo == 1));

	cout << endl << "equilatero: " << (char)(es_equilatero * 86 + !es_equilatero * 70);
	cout << endl << "escaleno: " << (char)(es_escaleno * 86 + !es_escaleno * 70);
	cout << endl << "isosceles: " << (char)(es_isosceles * 86 + !es_isosceles * 70);

	system("pause>0");
	return 0;
}
