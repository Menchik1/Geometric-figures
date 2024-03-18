#include <iostream>
using namespace std;
int P, S, Srline;

int Trapesia(float a, float b, float c, float d, float h) {
	if ((a + b > c + d) && (c + d >= h) && (a + b > h)) {
		P = a + b + c + d;
		S = (a + b) * h / 2;
		Srline = (a + b) / 2;
		cout << "Perimeter: " << P << endl;
		cout << "Area: " << S << endl;
		cout << "Length of the midline: " << Srline << endl;
	}
	else{
		cout << "The trapezoid does not exist";
	}
	return 0;

}

int main() {
	float a = 5, b = 10, c = 6, d = 8, h = 5;
	Trapesia(a, b, c, d, h);
	return 0;
}
