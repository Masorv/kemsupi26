/******************************************
 * Автор: Мыльников Александр             *
 * Название: Циклы с пред- и постусловием *
 * Вариант: 19                            *
 *****************************************/

#include <iostream>
#include <math.h>
#include <iomanip>
#include <numbers>

using namespace std;

const double pi = numbers::pi;

int main() {
  double elasticityModulus, PoissonsRatio, pipeLength, innerPipeDiameter, startInnerpipeDiameter, outerPipeDiameter, finInnerPipeDiameter, k, step1loop, step2loop;

  cout << "Input modulus of elasticity: ";
  cin >> elasticityModulus;

  cout << "Input Poisson's ratio: ";
  cin >> PoissonsRatio;

  cout << "Input pipe's length (cm): ";
  cin >> pipeLength;

  cout << "Input outer diameter of the pipe(cm): ";
  cin >> outerPipeDiameter;

  cout << "Input initial inner diameter of the pipe (cm): ";
  cin >> startInnerpipeDiameter;

  cout << "Input final inner diameter of the pipe (cm): ";
  cin >> finInnerPipeDiameter;

  cout << "Input step for the first (do-while) loop: ";
  cin >> step1loop;

  cout << "Input step for the second (while) loop: ";
  cin >> step2loop;

  cout << 'd' << '\t' << 'k' << '\n'
       << '\n';
  cout << fixed << setprecision(2);

  innerPipeDiameter = startInnerpipeDiameter;


  do {
    k = (pi * elasticityModulus * (pow(outerPipeDiameter, 4) - pow(innerPipeDiameter, 4))) / (55.5 * (1 + PoissonsRatio) * pipeLength);
    cout << innerPipeDiameter << '\t' << k << '\n'
         << '\n';
    innerPipeDiameter = innerPipeDiameter + step1loop;
  } while (innerPipeDiameter <= finInnerPipeDiameter - (finInnerPipeDiameter - startInnerpipeDiameter) / 2);

  while (innerPipeDiameter <= finInnerPipeDiameter) {
    k = (pi * elasticityModulus * (pow(outerPipeDiameter, 4) - pow(innerPipeDiameter, 4))) / (55.5 * (1 + PoissonsRatio) * pipeLength);
    cout << innerPipeDiameter << '\t' << k << '\n'
         << '\n';
    innerPipeDiameter = innerPipeDiameter + step2loop;
  }

  system("pause");
  return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
