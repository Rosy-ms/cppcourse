#include <iostream>
#include <clocale>
#include <iomanip>
#include <cstdlib>
#include <math.h>
# include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double c, an,ak,da,bn,bk,db,a,b,x,y;
    cout << "Введите значения c, an, ak, da, bn, bk, db \n";
    cin >> c >> an >> ak >> da >> bn >> bk >> db;
    cout << setw(15) << "a\\b";
    for (b=bn;b<=bk;b+=db)
        cout << setw(15) << setprecision(2) << b;
    for (a=an; a<=ak;a+=da){
        cout << endl << setw(15) << (a);
        for (b=bn;b<=bk;b+=db) {
            if (a+c >0.0001 || a+c<-0.0001){
                x=(fabs(b+4)/(a+c))*(powl(a,2)-b);
                if ((c>0.0001 || c<-0.0001) && (b<-4.00001 || b>-3.99999)){
                    y=(powl(x,3)/c)-((a*b-c*x)/(b+4));
                    cout << setw(15) << setprecision(5) << y;
                }
                else cout << setw(15) << "***";
            }
            else cout << setw(15) << "***";
        }
    }
    cout << endl;
    system("pause");
    return 0;
}