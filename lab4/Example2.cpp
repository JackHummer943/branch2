// Написать свои варианты функций:
// 1 определение длины строки
// 2 копирование строк
// 3 конкатенация строк
#include <iostream>
using namespace std;

void main()
{
  char str1[] = "querty", str2[] = "1234567890";

  // использование функций длины строки
  cout << "длина str1=" << dlina1(str1) << ", str2";
  cout << dlina1(str2) << endl;
  cout << "длина str1=" << dlina2(str2) << ", str2=";
  cout << dlina2(str2) << endl;
  cout << "длина str1=" << dlina3(str1) << ", str2=";
  cout << dlina3(str2) << endl;

  // вызов kopir(char*, char*)
  kopir(str1, str2);
  cout << "результат копирования: str1=" << str1;
  cout << ", str2=" << str2 << endl;

  // вызов sravn(char*, char*);
  cout << "результат сравнения: str1=" << str1;
  cout << ", str2=" << str2 << endl;
  sravn(str1, str2);

  // вызов kontact(char*, char*);
  konkat(str1, str2);
  cout << "результат сцепления: str1=" << str1;
  cout << ", str2=" << str2 << endl;

  return 0;
}
