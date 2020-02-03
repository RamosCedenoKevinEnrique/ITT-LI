#include "pch.h"
#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double A,B,C,h,k;
	cout << "Ingrese coordenada en A : ";
	cin >> A;
	cout << "Ingrese coordenada en B :";
	cin >> B;
	cout << "Ingrese coordenada en C :";
	cin >> C;
	h = B / 2;
	k = C + (B / 2);
	cout << "La ecuacion de la directriz es (x- " << h << " )^2 =" << (A/2) << "(y-"<<k <<")" << endl;
	cout << "el foco es:" << (A / 2) / A;
	cin.get();
	return 0;
}
