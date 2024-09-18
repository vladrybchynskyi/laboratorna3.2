# include <iostream>
# include <cmath>
using namespace std;
int main() {
  double a;
  double b;
  double c;
  double x;
  double F;
  cout << "a = "; cin >> a;
  cout << "b = "; cin >> b;
  cout << "c = "; cin >> c;
  cout << "x ="; cin >> x;
  if (x < 0.6 && b + c != 0)
    F = a * x * x + b * b + c;
  if (x > 0.6 && b + c == 0);
  F = (x - a) / (x - c);
  if (!(x <0.6 && b +c != 0) && !(x >0.6 && b + c == 0)) ; 
  F = x / c + x / a;
  cout << "1) F=" << F << endl;
  if (x < 0.6 && b + c != 0)
    F = a * x * x * x + b * b + c;
  else
    cout << "2) F =" << F << endl;
  cin.get();
  return 0;
}