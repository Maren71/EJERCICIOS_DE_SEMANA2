#include <conio.h>
#include <iostream>

using namespace std;

int main()
{
	float x1, x2, y1, y2;
	float distancia, angulo;

	cout << "digite el valor del primer punto (x1,y1): " << endl;
	cin >> x1 >> y1;
	cout << "digite el valor del segundo punto (x2,y2): " << endl;
	cin >> x2 >> y2;

	distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
	angulo = atan((y2 - y1) / (x2 - x1));

	cout << endl << "la distancia entre los dos puntos es: " << distancia;
	cout << endl << "el angulo es: " << angulo;

	system("pause>0");
	return 0;
}
