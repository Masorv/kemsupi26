/******************************************
 * Автор: Мыльников Александр             *
 * Название: Функции                      *
 * Вариант: 17                            *
 *****************************************/

#include <iostream>
#include <vector>

using namespace std;

vector <int>  countBiggerElements(vector <int> T, vector <int> Y, int c);
void output(vector <int> numberBiggerElements);

int main() {
  int n, k, c;

  cout << "Input c: ";
  cin >> c;

  cout << "Input n: ";
  cin >> n;

  cout << "Input k: ";
  cin >> k;

  vector <int> T(n);
  vector <int> Y(k);

  cout << "Input array 'T': ";

  for (int& number : T) {
    cin >> number;
  }

  cout << "Input array 'Y': ";

  for (int& number : Y) {
    cin >> number;
  }

  vector <int> numberBiggerElements = countBiggerElements(T, Y, c);

  output(numberBiggerElements);

  return 0;
}

vector <int>  countBiggerElements(vector <int> T, vector <int> Y, int c) {
  int countT = 0, countY = 0;

  for (int& number : T) {
    if (number > c) {
      ++countT;
    }
  }

  for (int& number : Y) {
    if (number > c) {
      ++countY;
    }
  }

  vector <int> numberBiggerElements(2);

  numberBiggerElements[0] = countT;
  numberBiggerElements[1] = countY;

  return numberBiggerElements;
}

void output(vector <int> numberBiggerElements) {
  cout << "Number of elements that are bigger than c in array T: " << numberBiggerElements[0] << '\n';
  cout << "Number of elements that are bigger than c in array Y: " << numberBiggerElements[1] << '\n';
}