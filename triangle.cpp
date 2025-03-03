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
  int A,B,C;
  bool fl = false;
  cout << "Введите сторону А:";
  cin >> A;
  cout << endl;
  cout << "Введите сторону B:";
  cin >> B;
  cout << endl;
  cout << "Введите сторону C:";
  cin >> C;
  cout << "Введите сторону А:";
  if ((A + B > C) and (B + C > A) and (A + C > B)) triangle(A, B, C, fl);//проверка на существование треугольника по трём сторонам
  else cout << "Треугольника с данными сторонами не существует" << endl;
  return 0;
}
