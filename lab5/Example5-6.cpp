// Написать программу-шифратор файлов. Она читает из файла и пишет в другой файл закодированные символы.
// схема шифровки: c = c^key[i], где c - символ, считанный из файла;
// key - ключ шифрования, строка которая передается как параметр командной строки. Программа использует символы из key циклически, пока не будет считан весь ввод.
// для проверки правильности программы зашифровать зашифрованный файл с тем же ключом. Должен получиться файл - ТОЧНАЯ копия исходного файла

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  // вводим переменную key
  string key;
  // вводим переменную input_filename
  string input_filename;
  string output_filename;

  // вывод пользователю
  cout << "Enter encryption key: ";
  // пользователь вводит
  cin >> key;

  cout << "Enter input filename: ";
  cin >> input_filename;

  // cin - объект входного пространства имен std:std::cin >> x, операция взятия из потока >> чтобы получить от пользователя введенное им значение
  cout << "Enter output filename: ";
  cin >> output_filename;

  ifstream input(input_filename);   // чтение из входного файла
  ofstream output(output_filename); // запись в выходной файл

  if (!input.is_open())
  {
    // cerr ошибка символа (cerr определен в заголвочном файле iostream и соответствует потоку C stderr)
    std::cerr << "Failed to open output file" << std::endl; // ошибка возникает если не удалось открыть входной файл
    return 1;
  }

  if (!output.is_open())
  {
    std::cerr << "Failed to open output file" << std::endl; // ошибка если не удалось открыть выходной файл
    return 1;
  }

  int key_length = key.length(); // вычисление длины ключа шифрования
  int key_index = 0;             // начальное значение индекса ключа
  char c;                        // переменная для хранения символов из файла

  while (input.get(c))
  {
    c = c ^ key[key_index];                   // применяем ключ
    output.put(c);                            // запись зашифрованного символа в выходной файл
    key_index = (key_index + 1) % key_length; // переход к следующему символу ключа
  }
  input.close();
  output.close();
  return 0;
}