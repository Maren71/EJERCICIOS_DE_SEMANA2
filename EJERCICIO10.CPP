#include <iostream>

using namespace std;

int main()
{
	int años,puntaje1,puntaje2;
	char estudios;

	cout << "ingrese la cantidad de años que lleva trabajando: ";
	cin >> años;
	cout << "estudios(P:primaria S:secundaria U:universitario G:posgrado): ";
	cin >> estudios;
    
	puntaje1 = (años < 5) * 5 + (años >= 5) * 10;
	puntaje2 = (estudios == 'P') * 5 + (estudios == 'S') * 10 + (estudios == 'U') * 20 + (estudios == 'G') * 30;

	cout << endl << "tu puntaje es: " << puntaje1 + puntaje2;

	system("pause>0");
	return 0;
}
