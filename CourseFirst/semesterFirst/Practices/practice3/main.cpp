#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	/*
    cout << "Введите a, b, nx, kx, dx" << endl;
	float x,a,b,y,z,dx,kx,e=0.0001;
	int f;
	cin >> a >> b >> x >> kx >> dx;
	cout.fixed;
	do {
		f=0;
		if (a+x<0) f=1;
		if (x<1) y=b*sqrt(a+x);
		else if (x>5) y=sqrt(a+x)*(b-x);
		else y = log(std::abs(b*x))+sqrt(a+x);
		z = pow(y,2) + pow(cos(y),3);
		if (f) cout << "При x=" << setw(4) << setprecision(4) << x << " происходит выход за ОДЗ" << endl;
		else if (x<e && x>-e) cout <<  "При x=     0" << " z=" << setw(6) << setprecision(4) << z << endl;
            else cout <<  "При x=" << setw(6) << setprecision(2) << x << " z=" << setw(6) << setprecision(4) << z << endl;
		x+=dx;
	} while (x<=kx);
	*/
    /*
    float y,Q,a,x=5,dx=-0.5,Qk=0,Pk,Sk;

	cout << "Введите x,a" << endl;
	cin >> x >> a;
    while (pow(a,3)-sin(a*x)>0) {
        if (x < 10) y=4*pow(x,0.6)-2*sqrt(log(x)-7);
        else y=1-cos(M_PI_2)*x+2*a*sin(x);
        Q=2.45*y*log(pow(a,3)-sin(a*x));
        if (Q>0) Qk++;
        x+=dx;
        cout << pow(a,3)-sin(a*x) << endl;
    }
	cout << Qk << endl;
*/
    float y, xn, xk, x, dx, z, m, zp=0, zn=0, mult=1;
	cout << "Введите xn, xk, dx " << endl;
	cin >> xn >> xk >> dx;
	m = round((xk - xn) / dx) + 1;
	x = xn;
	for (int i = 1; i <= m; i++, x += dx){
        if (x<1.0001 && x>-0.0001) continue;
        if (x<=3) z=2*pow(x,3)+sqrt(x/(x-1));
        else z = float(7/(x+6))+cos(pow(x,2));
        y = 0.25*z+log(pow(z,2));
        if (z>0) zp++;
        if (z<0) zn++;
        mult*=y;
    }
    cout << "случаев z>0 " << zp << "\nслучаев z<0 " << zn << "\nпроизведение y равно " << setw(4) << setprecision(1) << mult << endl;
    system("pause");
	return 0;

}
