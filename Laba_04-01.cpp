/******************************
 * Автор:  Козлов Е.В.        *
 * Тема:  Частота повторений  *
 * Вариант: №10               *
 ******************************/
#include <iostream>

using namespace std;

int main() {
  int symbols, evenNumber, count;
  cout << "Введите количество символов текста:";
  cin  >> symbols;
  char text[symbols];
  cout << "Введите текст из " << symbols << " символов: ";
  for (int symbolCount = 0; symbolCount < symbols; ++symbolCount) {
    cin >> text[symbolCount];
  }
  if (symbols % 2 != 0) {
    evenNumber = symbols - 1;
  } else {
      evenNumber = symbols - 1;
  }
  for (int symbolCount = 0; symbolCount < symbols; ++symbolCount) {
    int number = 0;
    for (int recalculatedSymbolCount = 0; recalculatedSymbolCount < symbols; ++recalculatedSymbolCount) {
      if (text[symbolCount] == text[recalculatedSymbolCount]) {
        ++number;
      }
    } // этот цикл считает количество одинаковых символов
    if (symbolCount > 0) {
      count = 0;
      for (int repeatedSybolCount = 0; repeatedSybolCount < symbolCount; ++repeatedSybolCount) {
        if (text[repeatedSybolCount] == text[symbolCount]) {
          count = count + 1;
        }
      } // этот цикл исключает символы, которые уже были посчитаны
      if (count == 0) {
        if (number - 1 > 0) {
          cout << text[symbolCount] << " = " << number - 1 << endl;
        }
      }
    } else {
      if (number - 1 > 0) {
      cout << text[symbolCount] << " = " << number - 1 << endl;
      }
    }
  }
  
  for (int symbolCount = 0; symbolCount < evenNumber; ++symbolCount) {
    int number = 0;
    for (int recalculatedSymbolCount = 0; recalculatedSymbolCount < symbols; ++recalculatedSymbolCount) {
      if (text[symbolCount] == text[recalculatedSymbolCount] & text[symbolCount + 1] == text[recalculatedSymbolCount + 1]) {
        ++number;
      }
    } // этот цикл считает количество одинаковых парных символов
    if (symbolCount > 1) {
      count = 0;
      for (int repeatedSybolCount = 0; repeatedSybolCount < symbolCount - 1; ++repeatedSybolCount) {
        if (text[repeatedSybolCount] == text[symbolCount] & text[repeatedSybolCount + 1] == text[symbolCount + 1]) {
          count = count + 1;
        }
      } // этот цикл исключает парные символы, которые были уже посчитаны
      if (count == 0) {
        if (number - 1 > 0) {
          cout << text[symbolCount] << text[symbolCount + 1] << " = " << number - 1 << endl;
        }
      }
    } else {
      if (number - 1 > 0) {
        cout << text[symbolCount] << text[symbolCount + 1] << " = " << number - 1 << endl;
      }
    }
  }

  return 0;
}
