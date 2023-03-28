// Для массива целых значений выполнить сортировку по возрастанию
// четных и убыванию нечетных значений
#include <iostream>
#include <algorithm>

using namespace std;

// логический метод с переменными x и y
bool comparison(int x, int y)
{
  // начинаем цикл, если первое число четное и (&&) второе четное
  if (x % 2 == 0 && y % 2 == 0)
  {
    // если оба четные, сравниваем по возрастанию
    return x < y;

    // иначе если первое число нечетное и второе нечетное
  }
  else if (x % 2 != 0 && y % 2 != 0)
  {
    // сравниваем по убыванию
    return x > y;
  }
  // если первое число четное, то оно меньше второго числа
  else if (x % 2 == 0)
  {
    return true;
  }
  // если первое число нечетное, то оно больше четного числа
  else
  {
    return false;
  }
}

int main()
{
  int a = 10; // размер массива
  // создаем массив
  int arr[a] = {1, 5, 3, 2, 7, 8, 6, 9, 0, 4};

  sort(arr, arr + a, comparison);

  cout << "Отсортированный массив: ";

  // выводим элементы начиная с нуля по одному (по очереди)
  for (int i = 0; i < a; i++)
  {
    // выведенный массив после сортировки
    cout << arr[i] << " ";
  }
  // конец строки
  cout << endl;
}