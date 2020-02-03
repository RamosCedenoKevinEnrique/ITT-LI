#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double x1, x2, y1, y2, m, d1, xb, yb;
	x1 = 2;
	y1 = 3;
	x2 = 2;
	y2 = 9;
	cout << "x1 es igual:" << x1 << endl;
	cout << "y1 es igual:" << y1 << endl;
	cout << "x2 es igual:" << x2 << endl;
	cout << "x2 es igual:" << y2 << endl;
	d1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout << "La distancias de los puntos 1,2 es:" << d1 << endl;;
	m = (y2 - y1) / (x2 - x1);
	cout << "La pendiente es:" << m << endl;;
	xb = (x1 + m * x2) / 1 + m;
	yb = (y1 + m * y2) / 1 + m;
	if (-m * x1 + y1 < 0)
		cout << "La ecuacion de la directriz es y = " << m << " x + " << -m * xb + yb << "" << endl;
	else
		cout << "La ecuacion de la directriz es y = " << m << " x + " << -m * xb + yb << "" << endl;
	cin.get();
	return 0;
}

