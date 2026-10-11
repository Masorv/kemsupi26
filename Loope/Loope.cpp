/*******************************
 * Автор: Мыльников Александр  *
 * Название: Цикл с ветвлением *
 * Вариант: 19                 *
 ******************************/

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main() {
  double processTime, tau, delta, k0, k1, k2, C, numberOfIterations;

  cout << "Input number of iterations: ";
  cin >> numberOfIterations;

  cout << "Input process time: ";
  cin >> processTime;

  cout << fixed << setprecision(3);

  for (int processIteration = 0; processIteration < numberOfIterations; ++processIteration) {
    
    cout << "Input velocity coefficients (k0, k1, k2): ";
    cin >> k0 
        >> k1   
        >> k2;

    delta = pow(k1, 2) - 4 * k0 * k2;
    tau = 2 * k2 * processTime + k1;

    if (delta < 0) {
      C = (2 / sqrt(-delta)) * (atan(tau / sqrt(-delta)) - atan(k1 / sqrt(-delta)));
    }
    else if (delta > 0) {
      C = 1 / sqrt(delta) * log(((tau - sqrt(delta)) * (k1 + sqrt(delta))) / ((tau + sqrt(delta)) * (k1 - sqrt(delta))));
    }

    cout << C << '\t' 
         << delta << '\n';
  }
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
