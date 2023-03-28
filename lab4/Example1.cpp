// Написать программу, которая использует функции:
// strlen() - определение длины строки
// strcat() - конкатенация строк
// strcpy() - копирование строк
// strcmp() - сравнение строк
// Для работы с этими функциями подключить файл string.h
#include <iostream>
#include <string.h>

int main()
{
  // создаем три массива символов
  char str1[20] = "Hello";
  char str2[20] = "World";
  char str3[20];
  int len;

  // использование strlen() для определения длины строки
  len = strlen(str1);
  std::cout << "Длина строки '" << str1 << "'равна " << len << std::endl;

  // использование stract() для конкатенации строк
  strcat(str1, str2);
  std::cout << "Строка после объединения: " << str1 << std::endl;

  // использование strepy() - копирование строк
  strcpy(str2, str1);
  std::cout << "после копирования " << str2 << std::endl;

  // использование strcmp() - сравнение строк
  if (strcmp(str2, str1) == 0)
  {
    std::cout << "слова равны" << std::endl;
  }
  else
    std::cout << "Слова не равны" << std::endl;
  return 0;
}