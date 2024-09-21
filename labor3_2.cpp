// laboratorna 3.2
// Рибчинський Владислав
// Лабораторна робота №3.2
// Розгалуження, задане формулою: функція з параметрами.
// Варіант 12

# include <iostream>
# include <cmath>
using namespace std;
int main() {
    double a; // вхідний аргумент
    double b; // вхідний параметр
    double c; // вхідний параметр
    double x; // вхідний параметр
    double F; // результат обчислення 
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x ="; cin >> x;
    // Розгалуження в скороченій формі
    if (x < 0.6 && b + c != 0)
        F = a * x * x + b * b + c;
    if (x > 0.6 && b + c == 0);
    F = (x - a) / (x - c);
    if (!(x < 0.6 && b + c != 0) && !(x > 0.6 && b + c == 0));
    F = x / c + x / a;
    cout << "1) F = " << F << endl;
    // Розгалуження в повній формі
    if (x < 0.6 && b + c != 0)
        F = a * x * x * x + b * b + c;
    else 
        if (x > 0.6 && b + c == 0)
        F = (x - a) / (x - c);
        else  
        F = x / c + x / a;
    cout << "2) F = " << F << endl;
    cin.get();
    return 0;
}
