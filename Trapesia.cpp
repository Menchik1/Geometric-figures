#include <iostream>
using namespace std;

void Trapesia(int a, int b, int c, int d, int h) {
	int P, S, Srline;
	P = a + b + c + d;
	S = (a + b) * h / 2;
	Srline = (a + b) / 2;
	cout << "Perimeter: " << P << endl;
	cout << "Area: " << S << endl;
	cout << "Length of the midline: " << Srline << endl;
}

int main() {
	int a = 5, b = 10, c = 6, d = 8, h = 5;
	Trapesia(a, b, c, d, h);
	return 0;
}