#include <iostream>
#include <cstdlib>
#include <clocale>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    /*
    cout << "Введите число" << endl;
    int x;
    cin >> x;
    if (x>0) x++;
    cout << x;
    */
    /*
    cout << "Введите число" << endl;
    int x;
    cin >> x;
    if (x>0) x++;
    else x-=2;
    cout << x;
    */
    /*
    cout << "Введите число" << endl;
    int x;
    cin >> x;
    if (x>0) x++;
    if (x<0) x=-2;
    if (x==0) x=10;
    cout << x;
    */
    /*
    cout << "Введите 3 числа" << endl;
    int x,y,z,k=0;
    cin >> x >> y >>z;
    if (x>0) k++;
    if (y>0) k++;
    if (z>0) k++;
    cout << "Положительных чисел: " << k <<endl;
    */
    /*
    cout << "Введите 3 числа" << endl;
    int x,y,z,k=0,c=0;
    cin >> x >> y >>z;
    if (x>0) k++;
    if (y>0) k++;
    if (z>0) k++;
    if (x<0) c++;
    if (y<0) c++;
    if (z<0) c++;
    cout << "Положительных чисел " << k <<endl;
    cout << "Отрицательных чисел " << c <<endl;
    */
    /*
    cout << "Введите 2 числа" << endl;
    int x,y;
    cin >> x >> y;
    if (x>y) cout << x << endl;
    else cout << y << endl;
    */
    /*
    cout << "Введите 2 числа" << endl;
    int x,y;
    cin >> x >> y;
    if (x<y) cout << 1 << endl;
    else cout << 2 << endl;
    */
    /*
    cout << "Введите 2 числа" << endl;
    int x,y;
    cin >> x >> y;
    if (x>y) cout << x << y << endl;
    else cout << y << x << endl;
    */
    /*
    cout << "Введите 2 числа" << endl;
    float A,B;
    cin >> A >> B;
    if (A>B){
        B = A+B;
        A = B-A;
        B = B-A;
    }
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    */

    system ("pause");
}