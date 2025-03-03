#include <iostream>
#include <cmath>
using namespace std;
double perimeter(double a, double b){
  return (a+b)*2;
}
double square(double a,double b){
  return a*b;
}
double diagonal(double a,double b){
  return sqrt(pow(a,2)+pow(b,2));
}
int main(){
  setlocale(LC_ALL,"Russian");
  double a,b;
  cout << "Введите первую сторону прямоугольника: ";
  cin >> a;
  cout << "\nВведите вторую сторону прямоугольника: ";
  cin >> b;
  if (a<=0||b<=0){
    cout << "Стороны не должны быть отрицательными" <<endl;
    return 1;
    }
  else{
    cout << "Периметр прямоугольника равен: " << perimeter(a,b) << endl;
    cout << "Площадь прямоугольника равна: " << square(a,b) << endl;
    cout << "Длина диагонали равна: " << diagonal(a,b) << endl << endl;
    return 0;
    }
}
