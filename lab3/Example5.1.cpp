// Отсортировать массив по возрастанию на интервале индексов от N1 до N2.

// Алгоритм сортировки выбором:
// с первого элемента проходимся по массиву
// находим мин. элмент в оставшейся части массива
// обмениваем текущий элемент с минимальным элементом
// начиная со второго элемента по новой находим мин. элемент в оставшейся части массива и обмениваем текущий элемент с минимальным

// реализуем алгоритм сортировки выбором

// принимаем массив и значение
void selectSort(int arr[], int n)
{
  // цикл начинается от нуля, до элмента минимального значения, перебор по одному элементу
  for (int i = 0; i < n - 1; i++)
  {
    // вводим минимальный индекс
    int minIndex = i;
    // начинаем внутренний цикл с x + 1, j не больше n; перебор по порядку
    for (int j = i + 1; j < n; j++)
    {
      // если массив с минимальным инд. меньше массива...
      if (arr[j] < arr[minIndex])
      {
        minIndex = j;
      }
    }
    // вводим новую целочисл. переменную, равную массиву minIndex
    int temp = arr[minIndex];
    arr[minIndex] = arr[i];
    arr[i] = temp;
  }
}

// создаем главный метод
void main()
{
  // задаем размер массива
  int size = 10;
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  // интервал индексов n1 n2 на которых нужно выполнить сортировку
  n1 = 2;
  n2 = 7;
}