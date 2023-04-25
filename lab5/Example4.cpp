// Написать программу, которая обрабатывает текстовый файл следующим образом
// В исходном тексте номера страниц простравлены в первой строке страницы.
// Требуется перенести эти номера в последнюю строку страницы и убрать знаки переноса.
// Например, номер страницы: -34-. Необходимо получить 34.
// Признаком перехода на следующую страницу является управляющий символ '\f'.

#include <fstream>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{

  string inputFileName = "input.txt";
  string outputFileName = "output.txt";

  // открываем исходный файл
  ifstream inputFile(inputFileName);

  // открываем выходной файл
  ofstream outputFile(outputFileName);

  if (!inputFile.is_open() || !outputFile.is_open())
  {
    cerr << "cannot open files" << endl;
    return 1;
  }
  // Читаем файл построчно
  string line;
  int pageIndex = 1;
  int lineIndex = 0;
  bool isFPreviousChar = false;
  while (getline(inputFile, line))
  {
    if (lineIndex == 0)
    {
      lineIndex++;
    }
    else
    {
      if (isFPreviousChar)
      {
        isFPreviousChar = false;
      }
      else
      {
        if (strcmp(line.c_str(), "\\f") == 0)
        {
          outputFile << pageIndex << endl;
          outputFile << "\\f" << endl;
          isFPreviousChar = true;
          pageIndex++;
        }
        else
        {
          outputFile << line << endl;
        }
      }
    }
  }

  // Закрываем файлы
  inputFile.close();
  outputFile.close();

  return 0;
}