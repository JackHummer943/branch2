// Изменить программу так, чтобы вместо функции malloc() использовалась функция calloc().
// в чем сходство и различие этих функций?
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  char *str1;
  char *str2;

  // malloc заменили на calloc, передаем
  // количество и размер элементов
  str1 = (char *)calloc(100, sizeof(char));
  str2 = (char *)calloc(100, sizeof(char));

  free(str1); // функция free() освобождает память
  free(str2);
  return 0;
}