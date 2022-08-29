#include <iostream>

using namespace std;

int main()
{
	long long codigo;
	int indicador,tipo_producto,dia_vencimiento,mes_vencimiento,año_vencimiento,m;

	cout << "ingrese el codigo de barras: ";
	cin >> codigo;

	indicador = codigo % 100;
	tipo_producto = (codigo / 100) % 100;
	año_vencimiento = ((codigo / 100) / 100) % 10000;
	mes_vencimiento = ((((codigo / 100) / 100) / 100)/100) % 100;
	dia_vencimiento = (((((codigo / 100) / 100) / 100) / 100) / 100);

	m = (indicador == 00);

	cout << endl << "dia de vencimiento: " << dia_vencimiento;
	cout << endl << "mes de vencimiento: " << mes_vencimiento;
	cout << endl << "año de vencimiento: " << año_vencimiento;
	cout << endl << "el tipo de producto es: " << (char)(tipo_producto);
	cout << endl << "producto perecible(0:no, 1:si): " << m;

	system("pause>0");
	return 0;
}
