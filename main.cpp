/*******************************
 * Автор: Мыльников Александр  *
 * Название: Линейный алгоритм *
 * Вариант: 19                 *
 ******************************/

#include <iostream>
#include <math.h>

using namespace std;

const double pi = 3.14, g = 9.8;

int main() {
 
  double wedgeMass, blockMass, frictionCoefficient, radianAlpha, A, a1, a2, alpha;

  cout << "Input mass of the wedge: ";
  cin >> wedgeMass;

  cout << "Input mass of the block: ";
  cin >> blockMass;

  cout << "Input coefficient of friction: ";
  cin >> frictionCoefficient;

  cout << "Input angle: ";
  cin >> alpha;

  radianAlpha = alpha * (pi / 180.0);
  A = wedgeMass + blockMass * (pow(sin(radianAlpha), 2.0) - frictionCoefficient * sin(radianAlpha * 2.0) / 2.0);
  //The friction is absent between the wedge and the horizontal plate
  a1 = (g * wedgeMass / A) * cos(radianAlpha) * (sin(radianAlpha) - frictionCoefficient * cos(radianAlpha));
  //The friction is absent between the block and the wedge
  a2 = (g * wedgeMass / A) * sin(radianAlpha) * (cos(radianAlpha) + frictionCoefficient * sin(radianAlpha));

  cout << a1 << '\n'
       << a2 << '\n';
  
  system("pause");
  return 0;
}
