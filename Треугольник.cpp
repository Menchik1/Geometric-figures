#include <iostream>
#include <math.h>
using namespace std;
void triangle(int a, int b, int c) {
    if ((a + b > c) and (a + c > b) and (b + c > a)) {
        float perimeter = a + b + c;
        float areaToHeronsFormula = sqrt(perimeter / 2 * (perimeter / 2 - a) * (perimeter / 2 - b) * (perimeter / 2 - c));
        if ((a == c and a != b) or (a == b and a != c) or (b == c and b != c) or (a == b and b == c)) {
            cout << "равнобедренный треугольник, ";
        }
        else {
            cout << "не равнобедренный треугольник, ";
        }
        cout << "периметр:" << perimeter << "," << " площадь по формуле Герона:" << areaToHeronsFormula << ".";
    }
    else {
        cout << "треугольник не существует";
    }
}
int main() {
    setlocale(LC_ALL, "Ru");
    float side_1 = 4;
    float side_2 = 2;
    float side_3 = 3;
    triangle(side_1, side_2, side_3);//коммент
}

