// Написать свои варианты функций:
// 1 определение длины строки
// 2 копирование строк
// 3 конкатенация строк
#include <iostream>
using namespace std;

int main()
{
  char str1[] = "qwerty", str2[] = "1234567890";

  // использование функций длины строки
  cout << "длина str1=" << long1(str1) << ", str2=";
  cout << long1(str2) << endl;
  cout << "длина str1=" << long2(str2) << ", str2=";
  cout << long2(str2) << endl;
  cout << "длина str1=" << long3(str1) << ", str2=";
  cout << long3(str2) << endl;

  // вызов copy(char*, char*)
  copy(str1, str2);
  cout << "результат копирования: str1=" << str1;
  cout << ", str2=" << str2 << endl;

  // вызов sravn(char*, char*);
  cout << "результат сравнения: str1=" << str1;
  cout << ", str2=" << str2 << endl;
  sravn(str1, str2);

  // вызов kontact(char*, char*);
  concatenation(str1, str2);
  cout << "результат сцепления: str1=" << str1;
  cout << ", str2=" << str2 << endl;

  return 0;
}

// функция определения длины строки
// способ 1
int long1(char *str)
{ // функция принимает указатель на строку
  int count = 0;
  while (*str != '\0')
  {
    count++;
    str++;
  }
  return count;
}
// функция определения длины строки, способ 2
int long2(char *str)
{
  char *temp = str;
  while (*temp != '\0')
  {
    temp++;
  }
  return (temp - str); // разница между указателем конец и указателем на начало строки = длина строки
}

// функция определения длины строки, способ 3
int long3(char *str)
{
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++)
  { // перебираем все символы в строке, пока не встретим нулевой символ
    count++;
  }
  return count;
}

// функция для копирования строки
void copy(char *str1, char *str2)
{
  while (*str1 != '\0')
  { // в цикле копируем символ из 1 строки во 2, пока не дойдем до нулевого символа
    // затем добавляем нулевой символ в конец второй строки
    *str2 = *str1;
    str1++;
    str2++;
  }
  *str2 = '\0';
}

// функция сравнения строк
void sravn(char *str1, char *str2)
{
  while (*str1 == *str2)
  {
    if (*str1 == '\0')
    {
      cout << "строки равны" << endl;
      return;
    }
    str1++;
    str2++;
  }
  cout << "Строки не равны" << endl;
}

//  функция конкатенации строк
// сравниваем символы в двух строках, пока не встретим отличающиеся
// либо нулевой символ
void concatenation(char *str1, char *str2)
{
  while (*str1 != '\0')
  {
    str1++;
  }
  while (*str2 != '\0')
  {
    *str1 = *str2;
    str1++;
    str2++;
  }
  *str1 = '\0';
}
