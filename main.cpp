/*************************
 * Автор: Мыльников А.М. *
 * Дата: 16.09.2026      *
 * Название: Линейный    *
 * алгоритм вариант 19   *
 ************************/
#include <iostream>
#include <math.h>

using namespace std;

int main() {

	const double pi = 3.14, g = 9.8;
	double wedgeMass, blockMass, frictionCoefficient, radianAlpha, A, a1, a2;
	int alpha;

	cout << "Input mass of the wedge: ";
	cin >> wedgeMass;
	cout << "Input mass of the block: ";
	cin >> blockMass;
	cout << "Input coefficient of friction: ";
	cin >> frictionCoefficient;
	cout << "Input angle: ";
	cin >> alpha;

	radianAlpha = 40 * (pi / 180);
	A = wedgeMass + blockMass * (pow(sin(radianAlpha), 2) - frictionCoefficient * sin(radianAlpha * 2) / 2);

	a1 = (g * wedgeMass / A) * cos(radianAlpha) * (sin(radianAlpha) - frictionCoefficient * cos(radianAlpha));
	cout << a1 << '\n';

	a2 = (g * wedgeMass / A) * sin(radianAlpha) * (cos(radianAlpha) + frictionCoefficient * sin(radianAlpha));
	cout << a2 << '\n';

	system("pause");
	return 0;
}