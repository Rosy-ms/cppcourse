#include <iostream>
#include <cstdlib>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Russian");
    /*
    cout << "Введите A и B" << endl;
    int A,B;
    cin >> A >> B;
    if (A!=B) 
        if (A>B) B=A;
        else A=B;
    else {
        A=0;
        B=0;
    }
    cout << "Новые значения A и B:\n" << A << " " << B << endl;
    */
    /*
    cout << "Введите 3 числа" << endl;
    float z,x,c,mid;
    cin >> z >> x >> c;
    if (z==x || x==c || z==c)
        cout << "Среди одинаковых чисел среднее не найти" << endl;
    else {
    if ((z>x && z<c) || (z<x && z>c)) mid = z;
    if ((x>c && x<z) || (x<c && x>z)) mid = x;
    if ((c>z && c<x) || (c<z && c>x)) mid = c;
    cout << "Cреднее из них " << mid << endl;
    }
    */
    /*
    cout << "Введите 3 числа" << endl;
    float z,x,c,sf,mid;
    cin >> z >> x >> c;
    if (z <= x && z <= c)
        mid = z;
    if (x <= c && x <= z)
        mid = x;
    if (c <= z && c <= x)
        mid = c;
    sf = z+x+c-mid;
    cout << "Сумма двух наибольших из них равна " << sf << endl;
    */
    /*
    cout << "Введите A, B, C" << endl;
    float A,B,C;
    cin >> A >> B >> C;
    if ((A<=B && B<=C) || (A>=B && B>=C)) {
        A*=2;
        B*=2;
        C*=2;
    }
    else {
        A=-A;
        B=-B;
        C=-C;
    }
    cout << "Новые значения A, B, C:\n" << A << " " << B << " " << C << endl;
    */
    /*
    cout << "Введите A, B, C, D" << endl;
    int A,B,C,D,i;
    cin >> A >> B >> C >> D;
    if (A!=B || A!=C) i = 1;
    if (B!=C || B!=D) i = 2;
    if (C!=D || C!=A) i = 3;
    if (D!=A || D!=B) i = 4;
    cout << "Порядковый номер числа, отличного от остальных равен " << i << endl;
    */
    /*
    cout << "Введите координаты x, y" << endl;
    float x,y,res;
    cin >> x >> y;
    if (x==0 && y==0)
        res = 0;
    if (x==0 && y!=0)
        res = 1;
    if (x!=0 && y==0)
        res = 2;
    if (x!=0 && y!=0)
        res = 3;
    cout << res << endl;
    */
    /*
    cout << "Введите координаты трёх вершин прямоугольника" << endl;
    int Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
    cout << "A: ";
    cin >> Ax >> Ay;
    cout << "B: ";
    cin >> Bx >> By;
    cout << "C: ";
    cin >> Cx >> Cy;
    if (Bx=Cx) Dx = Ax;
    if (Cx=Ax) Dx = Bx;
    if (Ax=Bx) Dx = Cx;
    if (By=Cy) Dy = Ay;
    if (Cy=Ay) Dy = By;
    if (Ay=By) Dy = Cy;
    cout <<"D: " << Dx << " " << Dy << endl;
    */
    /*
    cout << "Введите x" << endl;
    int x;
    cin >> x;
    if (x<-2 || x>2) x*=2;
    else x*=-3;
    cout << "x = " << x << endl;
    */
    /*
    cout << "Введите x" << endl;
    float x;
    cin >> x;
    if (x==0) x=0;
    else if (int(x)%2==0) x=1;
         else if (int(x)%2==1) x=-1;
    cout << "x = " << x << endl;
    */

    system("pause");
    return 0;
}
