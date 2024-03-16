#include <iostream>
using namespace std;
int P, S, Srline;
int Trapesia(int a, int b, int c, int d, int h) {

	P = a + b + c + d;
	S = (a + b) * h / 2;
	Srline = (a + b) / 2;
	return 0;

}

int main() {
	int a = 5, b = 10, c = 6, d = 8, h = 5;
	Trapesia(a, b, c, d, h);
	cout << "Perimeter: " << P << endl;
	cout << "Area: " << S << endl;
	cout << "Length of the midline: " << Srline << endl;
	return 0;
}
