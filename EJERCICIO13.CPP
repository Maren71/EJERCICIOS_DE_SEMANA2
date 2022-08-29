#include <iostream>

using namespace std;

int main()
{
	long long codigo;
	int segundo, minuto, hora, apellido_p, apellido_m, nombre;

	cout << "ingrese su codigo: ";
	cin >> codigo;

	segundo = codigo % 100;
	minuto = (codigo / 100) % 100;
	hora = ((codigo / 100) / 100) % 100;
	apellido_m = (((codigo / 100) / 100) / 100) % 100;
	apellido_p = ((((codigo / 100) / 100) / 100) / 100) % 100;
	nombre = (((((codigo / 100) / 100) / 100) / 100) / 100);


	cout << endl << "su nombre empieza con la letra: " << (char)(nombre);
	cout << endl << "su apellido paterno empieza con la letra: " << (char)(apellido_p);
	cout << endl << "su apellido materno empieza con la letra: " << (char)(apellido_m);
	cout << endl << "hora de entrada: " << hora;
	cout << endl << "minuto de entrada: " << minuto;
	cout << endl << "segundo de entrada: " << segundo;
	cout << endl << "llego tarde?: " << (char)((hora <= 9) * 86 + !(hora <= 9) * 70);

	system("pause>0");
	return 0;
}
