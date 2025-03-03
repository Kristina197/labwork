#include <iostream>
#include <math.h>
#define _USE_MATH_DEFINES_

using namespace std;

void circle(int r, int corner)// r - радиус, corner - угол сектора
{
    double L = 2 * M_PI * r; // длина окружности
    cout << "Окружность радиусом = " << r <<"\n"
        << "Длина окружности: " << L << endl
        << "Площадь круга: " << M_PI* r * r << endl
        << "Площадь кругового сектора: " << M_PI * r * r * corner / 360 << endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int r = 5, corner = 45;
    circle(r, corner);
}
