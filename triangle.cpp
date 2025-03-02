#include <iostream>
#include <math.h>

using namespace std;

void triangle(int a, int b, int c, bool fl) 
{
  int P = a + b + c, p = P/2;
  if ((a == b) or (a == c) or (b == c)) fl = true; // проверка на равнобедренность
  cout << "Треугольник со сторонами: A=" << a << ", В=" << b << " и С=" << c << " И следующие его параметры.\n"//далее вывод всех параметров треугольника
    << "Периметр: " << P << endl
    << "Площадь: " << sqrt(p*(p-a)*(p-b)*(p-c)) << endl
    << "Равнобедренный?: " << boolalpha << fl << endl;
}

int main()
{
  setlocale(LC_ALL, "Russian");
  int A = 5, B = 2, C = 5;
  bool fl = false;
  if ((A + B > C) and (B + C > A) and (A + C > B)) triangle(A, B, C, fl);//проверка на существование треугольника по трём сторонам
  else cout << "Треугольника с данными сторонами не существует" << endl;
  return 0;
}
