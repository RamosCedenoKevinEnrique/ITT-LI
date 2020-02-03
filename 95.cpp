#include <iostream>
using namespace std;
 
int main(){
  double x1,x2,y1,y2,m,p,q;
  cout << "Ingrese coordenada en x1 : ";
  cin >> x1;
  cout << "Ingrese coordenada en y1 :";
  cin >> y1;
  cout << "Ingrese coordenada en x2 :";
  cin >> x2;
  cout << "Ingrese coordenada en y2 :";
  cin >> y2;
  if ( x1==x2)
    cout << "La ecuacion es: x="<<x1 <<endl;
  else if ( y1==y2)
    cout << "La ecuacion es: y="<<y1 <<endl;
  else {
  m=(y2-y1)/(x2-x1);
  if ( -m*x1+y1<0)
    cout << "La ecuacion de la recta es y = " <<  m << " x " << -m*x1+y1 <<"" <<endl;
  else
    cout << "La ecuacion de la recta es y = " <<  m << " x + " << -m*x1+y1 <<"" <<endl;
  cin.get();
  }
  cin.get();
  return 0;
}
