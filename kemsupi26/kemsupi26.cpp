/******************************************
 * Автор: Мыльников Александр             *
 * Название: Функции                      *
 * Вариант: 17                            *
 *****************************************/

#include <iostream>
#include <vector>

using namespace std;

void inputVector(vector <int>& vec, int size);
int  countBiggerElements(vector <int> T, int c);


void inputVector(vector <int>& vec, int size) {
  cout << "Input vector: ";

  for (int nummberIndex = 0; nummberIndex < size; ++nummberIndex) {
    cin >> vec[nummberIndex];
  }

}

int  countBiggerElements(vector <int> vec, int c) {
  int count = 0;

  for (int& number : vec) {
    if (number > c) {
      ++count;
    }
  }

  return count;
}

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

  inputVector(T, n);
  inputVector(Y, k);

  cout << "Count of elements that are bigger than c in T: " << countBiggerElements(T, c) << '\n'
       << "Count of elements that are bigger than c in Y: " << countBiggerElements(Y, c);

  return 0;
}
