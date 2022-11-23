//#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <clocale>
#include <cstdlib>

using namespace std;

int main()//_tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL,"Russian");
    cout << "Input x\n";
	float a,x;
	cin >> x;
	if (x>1.5) a = 1 + pow(sin(x),3.0);
		else a = 1 / (1 - pow(x,2.0));
	if (x == 1)	cout << "can't divide by zero" << endl;
		else cout << a << endl;
	system("pause");
	return 0;
}