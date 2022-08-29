#include <iostream>

using namespace std;

int main()
{
	int numero,precio_zona;
	char zona, socio;
	float descuento1, descuento2;

	cout << "ingrese que zona desea(v:vip, p:platea, e:popular): ";
	cin >> zona;
	cout << "ingrese el numero de entradas que desea comprar: ";
	cin >> numero;
	cout << "¿es socio? (s:si o n:no): ";
	cin >> socio;

	precio_zona = (zona == 'v') * 350 + (zona == 'p') * 130 + (zona == 'e') * 50;
	descuento1 = (numero >= 3 && numero <= 6) * 0.05 + (numero >= 7 && numero <= 9) * 0.075 + (numero > 9) * 0.1;
	descuento2 = (socio == 's') * 0.08;

	cout << endl << "el monto a pagar es: " << (precio_zona - (descuento1 + descuento2)*precio_zona)*numero;

	system("pause>0");
	return 0;
}
