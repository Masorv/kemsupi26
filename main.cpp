/*************************
 * Автор: Мыльников А.М. *
 * Дата: 16.09.2026      *
 * Название: Линейный    *
 * алгоритм вариант 19   *
 ************************/
#include <iostream>
#include <math.h>
#include <windows.h>

using namespace std;

int main(){
  SetConsoleOutputCP(CP_UTF8);
  SetConsoleCP(CP_UTF8);

  const double pi = 3.14, g = 9.8;
  double M, m, k, radianAlpha, A, a1, a2;
  int alpha;

  cout << "Введите массу клина: ";
  cin >> M;
  cout << "Введите массу бруска: ";
  cin >> m;
  cout << "Введите коеффициент трения: ";
  cin >> k;
  cout << "Введите угол: ";
  cin >> alpha;

  radianAlpha = 40 * (pi / 180);
  A = M + m * (pow(sin(radianAlpha), 2) - k * sin(radianAlpha * 2) / 2);

  a1 = (g * M / A) * cos(radianAlpha) * (sin(radianAlpha) - k * cos(radianAlpha));
  cout << a1 << '\n';

  a2 = (g * M / A) * sin(radianAlpha) * (cos(radianAlpha) + k * sin(radianAlpha));
  cout << a2 << '\n';

  system ("pause");
  return 0;
}
