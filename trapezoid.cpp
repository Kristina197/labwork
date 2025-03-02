#include <iostream>
using namespace std;

double midLine(double a, double b){
    return (a+b)/2.0;
}
double square(double a, double b, double h){
    return ((a+b)/2.0)*h;
}
double perimetr(double a, double b, double c, double d){
    return a+b+c+d;
}

int main() {
    setlocale(LC_ALL, "Russian");
    double a, b, c, d, h;
    cout << "Введите нижнее основание трапеции: ";
    cin >> a;
    cout << "Введите верхнее основание трапеции: ";
    cin >> b;
    cout << "Введите первую боковую сторону трапеции: ";
    cin >> c;
    cout << "Введите вторую боковую сторону трапеции: ";
    cin >> d;
    cout << "Введите высоту трапеции: ";
    cin >> h;
    cout << "\n";
    cout << "Периметр трапеции равен: " << perimetr(a, b, c, d) << endl;
    cout << "Площадь трапеции равна: " << square(a, b, h) << endl;
    cout << "Длина средней линии трапеции равна: " << midLine(a, b) << endl;
    return 0;
}
