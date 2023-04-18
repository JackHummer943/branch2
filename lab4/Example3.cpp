// Переписать функцию так, чтобы они испрользовали
// динамическую память
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
  char *str1;
  char *str2;

  // функция malloc для выделения памяти для каждой строки
  // sizeof(char) для указания размера элемента
  str1 = (char *)malloc(100 * sizeof(char));
  str2 = (char *)malloc(100 * sizeof(char));

  free(str1); // функция free() освобождает память
  free(str2);
  return 0;
}