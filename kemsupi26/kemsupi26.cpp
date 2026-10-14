/******************************************
 * Автор: Мыльников Александр             *
 * Название: Обработка массивов           *
 * Вариант: 19                            *
 *****************************************/

#include <iostream>

using namespace std;

int main() {
  const int maxSize = 50;
  int B[maxSize][maxSize], countArray[maxSize], minValueArray[maxSize];
  int size;

  cout << "Enter the length and width of the matrix (1-50): ";
  cin >> size;

  if (size < 1 || size > 50) {
    cout << "Invalid length and width";
    return 1;
  }

  cout << "Enter the matrix values:\n";
  for (int rowIndex = 0; rowIndex < size; ++rowIndex) {
    for (int columnIndex = 0; columnIndex < size; ++columnIndex) {
      cin >> B[rowIndex][columnIndex];
    }
  }

  for (int columnIndex = 0; columnIndex < size; ++columnIndex) {

    int count = 0, minValue = 0;

    for (int rowIndex = 0; rowIndex < size; ++rowIndex) {
      if (B[rowIndex][columnIndex] < 0) {

        ++count;

        if (B[rowIndex][columnIndex] < minValue) {
          minValue = B[rowIndex][columnIndex];
        }
      }
    }
    countArray[columnIndex] = count;
    minValueArray[columnIndex] = minValue;
  }

  cout << '\n';

  for (int rowIndex = 0; rowIndex < size; ++rowIndex) {
    for (int columnIndex = 0; columnIndex < size; ++columnIndex) {
      cout << B[rowIndex][columnIndex] << '\t';
    }
    cout << '\n';
  }

  cout << '\n';

  for (int columnIndex = 0; columnIndex < size; ++columnIndex) {
    cout << countArray[columnIndex] << '\t';
  }

  cout << '\n';

  for (int columnIndex = 0; columnIndex < size; ++columnIndex) {
    cout << minValueArray[columnIndex] << '\t';
  }

  return 0;
}