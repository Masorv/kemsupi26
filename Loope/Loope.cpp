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
  double processTime, tau, delta, k0, k1, k2, C, numberOfIterations, precision;

  cout << "Input number of iterations: ";
  cin >> numberOfIterations;

  cout << "Input process time: ";
  cin >> processTime;

  cout << "Input precision of fractional numbers: ";
  cin >> precision;

  cout << fixed << setprecision(precision);

  for (int processIteration = 0; processIteration < numberOfIterations; ++processIteration) {
    
    cout << "Input velocity coefficients (k0, k1, k2): ";
    cin >> k0 
        >> k1   
        >> k2;

    delta = pow(k1, 2) - 4.0 * k0 * k2;
    tau = 2.0 * k2 * processTime + k1;

    if (delta < 0.0) {
      C = (2.0 / sqrt(-delta)) * (atan(tau / sqrt(-delta)) - atan(k1 / sqrt(-delta)));
    }
    else if (delta > 0.0) {
      C = 1.0 / sqrt(delta) * log(((tau - sqrt(delta)) * (k1 + sqrt(delta))) / ((tau + sqrt(delta)) * (k1 - sqrt(delta))));
    }

    cout << C << '\t' 
         << delta << '\n';
  }
}
