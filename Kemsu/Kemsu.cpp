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
  double elasticityModulus, PoissonsRatio, pipeLength, innerPipeDiameter, startInnerpipeDiameter, outerPipeDiameter, finInnerPipeDiameter, k, step1loop, step2loop, precision;

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

  cout << "Input precision: ";
  cin >> precision;

  cout << 'd' << '\t' << 'k' << "\n\n";
  cout << fixed << setprecision(precision);

  innerPipeDiameter = startInnerpipeDiameter;


  do {
    k = (pi * elasticityModulus * (pow(outerPipeDiameter, 4.0) - pow(innerPipeDiameter, 4.0))) / (55.5 * (1.0 + PoissonsRatio) * pipeLength);
    cout << innerPipeDiameter << '\t' << k << "\n\n";
    innerPipeDiameter = innerPipeDiameter + step1loop;
  } while (innerPipeDiameter <= finInnerPipeDiameter - (finInnerPipeDiameter - startInnerpipeDiameter) / 2);

  while (innerPipeDiameter <= finInnerPipeDiameter) {
    k = (pi * elasticityModulus * (pow(outerPipeDiameter, 4.0) - pow(innerPipeDiameter, 4.0))) / (55.5 * (1.0 + PoissonsRatio) * pipeLength);
    cout << innerPipeDiameter << '\t' << k << "\n\n";
    innerPipeDiameter = innerPipeDiameter + step2loop;
  }

  return 0;
}