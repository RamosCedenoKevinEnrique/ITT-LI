#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double x1, x2, x3, y1, y2, y3, m, d1, d2, r, xb, yb;
	cout << "Ingrese coordenada en x1 : ";
	cin >> x1;
	cout << "Ingrese coordenada en y1 :";
	cin >> y1;
	cout << "Ingrese coordenada en x2 :";
	cin >> x2;
	cout << "Ingrese coordenada en y2 :";
	cin >> y2;
	cout << "Ingrese coordenada en x3 :";
	cin >> x3;
	cout << "Ingrese coordenada en y3 :";
	cin >> y3;
	d1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	d2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	cout << "La distancias de los puntos 1,2 es:" << d1 << endl;;
	cout << "La distancias de los puntos 2,3 es:" << d2 << endl;;
	r = d1 / d2;
	cout << "La razon es:" << r << endl;;
	xb = (x1 + r * x2) / 1 + r;
	yb = (y1 + r * y2) / 1 + r;
	m = (y3 - yb) / (x3 - xb);
	cout << "La ecuacion de la directriz es y = " << m << " x + " << -m * xb + yb << "" << endl;
	cin.get();
	return 0;
}
