// Описание класса выделить в заголовочный файл,
// определение его методов - в файл с расширением .cpp
// текст главной функциинаписать в отдельном файле.

Stroka::Stroka(const char *string)
{
  strcpy(str, string);
}
Stroka::Stroka(const Stroka &s)
{
  strcpy(str, s.str);
}
Stroka &Stroka::operator=(const Stroka &s)
{
  strcpy(str, s.str);
  return *this;
}
Stroka &Stroka::operator+(const Stroka &s)
{
  strcpy(str.s.str);
  return *this;
}
int Stroka::operator==(const Stroka &s)
{
  strcpy(str, s.str);
  return *this;
}
int Stroka::operator==(const Stroka &s)
{
}