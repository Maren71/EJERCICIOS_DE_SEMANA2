#include <iostream>

using namespace std;

int main()
{
	int edad;
	float precio_modelo_color,precio_final;
	char color, modelo;

	cout << "ingrese su edad: ";
	cin >> edad;
	cout << "ingrese el modelo de su auto (A o B): ";
	cin >> modelo;
	cout << "ingrese el color de su auto(B:blanco, M:metalizado, O:otro): ";
	cin >> color;

	precio_modelo_color = (modelo == 'A' && color == 'B') * 240.5 +
		(modelo == 'A' && color == 'M') * 330 +
		(modelo == 'A' && color == 'O') * 270.5 +
		(modelo == 'B' && color == 'B') * 300 +
		(modelo == 'B' && color == 'M') * 360.5 +
		(modelo == 'B' && color == 'O') * 330;

	precio_final = ((edad < 31) * 1.25 + (edad > 65) * 1.10 + (edad>=31 && edad<=65)) * precio_modelo_color;

	cout << endl << "precio del seguro: " << precio_final;

	system("pause>0");
	return 0;
}
