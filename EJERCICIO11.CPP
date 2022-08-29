#include <iostream>

using namespace std;

int main()
{
	int edad,bono_nacionalidad,bono_edad;
	char nacionalidad;

	cout << "ingresa tu edad: ";
	cin >> edad;
	cout << "ingresa tu nacionalidad(E:extranjero, N:nacional): ";
	cin >> nacionalidad;

	bono_nacionalidad = (nacionalidad == 'N') * 0 + (nacionalidad == 'E') * 500;
	bono_edad = (edad >= 15 && edad <= 20) * 1400 + (edad >= 21 && edad <= 25) * 1500 + (edad >= 26 && edad <= 30) * 1200;

	cout << endl << "su sueldo es: " << 2500 + bono_nacionalidad + bono_edad + (!bono_edad * 800);

	system("pause>0");
	return 0;
}
