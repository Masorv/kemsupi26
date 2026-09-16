/*************************
 * Автор: Мыльников А.М. *
 * Дата: 16.09.2026      *
 * Название: Линейный    *
 * алгоритм вариант 19   *
 ************************/
#include <iostream>
#include <math.h>

using namespace std;

int main(){
  const double pi = 3.14f, g = 9.8f;
  double M = 25.52, m = 5.7, k = 0.15, radianAlpha, A, a1, a2;
  int alpha = 40;

  radianAlpha = 40 * (pi / 180);
  A = M + m * (pow(sin(radianAlpha), 2) - k * sin(radianAlpha * 2) / 2);

  a1 = (g * M / A) * cos(radianAlpha) * (sin(radianAlpha) - k * cos(radianAlpha));
  cout << a1 << '\n';

  a2 = (g * M / A) * sin(radianAlpha) * (cos(radianAlpha) + k * sin(radianAlpha));
  cout << a2 << '\n';

  system ("pause");
  return 0;
}