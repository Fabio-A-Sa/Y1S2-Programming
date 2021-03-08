// Created on March, 2021
// @author: Fábio Araújo de Sá

#include <iostream>
#include <cmath>
using namespace std;

double g (double x) {
	return pow (x, 2);
}

double h (double x) {
	return sqrt(4-pow(x, 2));
}

double integrateTR(double f(double), double a, double b, int n) {

	double h = (b - a) / n;
	double sum = 0;

	for (int i = 1; i <= n; i++) {
		sum += h / 2 * (f(a + (i - 1)*h) + f(a + i*h));
	}
	return sum;
}

int main() {

	cout << integrateTR(g, 0, 10, 100) << endl;
	cout << integrateTR(h, -2, 2, 100) << endl;
	return 0;
}