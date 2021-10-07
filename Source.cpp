
// Lab_04_2.cpp
// Мельничук Ілля
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 15
#include<iostream>
#include <cmath>
#include<iomanip>
using namespace std;
int main() {
	double x, y, a, b, xp, xk, dx;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		 << setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{

		a = pow(x, 3) + 2;
		if (x < 4)
			b = 5 * pow(x, 8) + pow(x, 6) - pow(x, 2) + 3;
		else
			if (x >= 7)
				b = log(2 * x + exp(5 * x + 5));
			else
				b = atan(abs(x + 3) / 2) + 7 * x;
		y = a + b;
			cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
}