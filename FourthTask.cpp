/**********************************
* Автор: Калинин Андрей           *
* Лабораторная №4                 *
* Дата: 12.10.2023                *
* Название:Обработка массивов     *
* Вариант: 7                      *
* https://onlinegdb.com/ve7KOb0oA *
**********************************/

#include <iostream>

using namespace std;

int main() {
  const int arraySize = 100;
  int column;
  int line;
  double matrix[arraySize][arraySize];
  int deleter;

  cout << "Columns in original matrix = ";
  cin >> column;
  cout << "Lines in original matrix = ";
  cin >> line;
  cout << "Enter the values in the matrix ";

  for (int firstIndex = 0; firstIndex < column; ++firstIndex) {
    for (int secondIndex = 0; secondIndex < line; ++secondIndex) {
      cin >> matrix[firstIndex][secondIndex];
    }

  }

  cout << "Original matrix: ";

  for (int firstIndex = 0; firstIndex < column; ++firstIndex) {
    cout << '\n';
    for (int secondIndex = 0; secondIndex < line; ++secondIndex) {
      cout  << matrix[firstIndex][secondIndex] << " ";
    }

  }

  cout << "Delete line and column number: ";
  cin >> deleter;
  cout << "New matrix: ";

  for (int firstIndex = 0; firstIndex < column; ++firstIndex) {
    if (firstIndex != deleter) {
      cout << '\n';
    }

    for (int secondIndex = 0; secondIndex < line; ++secondIndex) {
      if (firstIndex != deleter - 1 && secondIndex != deleter - 1) {
        cout << matrix[firstIndex][secondIndex] << " ";
      }

    }

  }

  return 0;
}
