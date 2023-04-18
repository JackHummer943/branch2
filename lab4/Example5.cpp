// Организовать массив строк. Применить функции,
// написанные в предыдущем пункте к строкам, сотсавляющим
// этот массив
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
{
  // создаем массив mass из трех указателей на символы
  const int n = 3;
  char *mass[n];

  for (int i = 0; i < n; i++)
  {
    mass[i] = (char *)calloc(100, sizeof(char)); // выделяем память с помощью функции calloc()
  }

  strcpy(mass[0], "Hi"); // функции strcpy() для копирования текста в каждую строку
  strcpy(mass[1], "Middle Earth");
  strcpy(mass[2], "!");

  for (int i = 0; i < n; i++)
  { // вывод в консоль
    cout << mass[i] << " ";
  }
  for (int i = 0; i < n; i++)
  {
    free(mass[i]); // освобождаем память, выделенную для каждой строки функцией free()
  }
  return 0;
}