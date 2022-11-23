#include <iostream>
#include <cstdlib>
#include <clocale>
#include <cmath>

using namespace std;

int main() {
    const float e = 2.7182;
    setlocale(LC_ALL, "Russian");
    cout << "Введите x, p" << endl;
    cout << "Исходные данные для контрольного расчёта: x = 3; p = 4" << endl;
    float a,b,x,p;
    cin >> x >> p;
    a = sqrt(2*p) * pow(x,p+1);
    b = a * pow(e,-x)*pow(e,sqrt(2*p*x));
    cout <<"a = " << a << endl << "b = " << b << endl;
    system("pause");
    return 0;
}