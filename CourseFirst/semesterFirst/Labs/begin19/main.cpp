#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

const int Exercise1=1, Exercise2=2, Exercise3=3, Exercise4=4,
Exercise5=5, Exercise6=6, Exercise7=7, Exercise8=8, Exercise9=9;
const int Relaunch=1,Exit=2;

int _tmain(int argc, _TCHAR* argv[])
{
    setlocale(LC_ALL, "Russian");
    int secondChoice = 1;
    while (secondChoice == 1){
        int choice = 0;
        system("cls");
        cout << "Выберите задание от 1 до 9" << endl;
        cin >> choice;
        cout << "Begin"<<choice<<".\n";
        switch (choice)
        {
        case Exercise1:{
            cout << "Введите число, чтобы посчитать периметр" << endl;
            float a,b;
            cin >> a;
            b = a*4;
            cout << "Периметр квадрата равен " << b << endl;
            break;
        }
        case Exercise2:{
            cout << "Введите число, чтобы посчиитать площадь" << endl;
            float a,b;
            cin >> a;
            b = pow(a,2);
            cout << "Площадь квадрата равен " << b << endl;
            break;
        }
        case Exercise3:{
            cout << "Введите 2 числа" << endl;
            float a,b,S,P;
            cin >> a >> b;
            S = a*b;
            P = 2*(a+b);
            cout << "Площадь прямоугольника равна " << S << endl;
            cout << "Периметр прямоугольника равна " << P << endl; 
            break;
        }
        case Exercise4:{
            cout << "Введите диаметр" << endl;
            float d, L;
            cin >> d;
            L = d * 3.14;
            cout << "Площадь прямоугольника равен " << L << endl;
            break;
        }
        case Exercise5:{
            cout << "Введите ребро куба" << endl;
            float a, V, S;
            cin >> a;
            V = pow(a, 3);
            S = 6*pow(a,2);
            cout << "Объём куба равен " << V << endl;
            cout << "Площадь куба равна " << S << endl;
            break;
        }
        case Exercise6:{
            cout << "Введите 3 длины рёбер" << endl;
            float a, b, c, V, S;
            cin >> a >> b >> c;
            V = a*b*c;
            S = 2*(a*b+b*c+a*c);
            cout << "Объём прямоугольного параллелепипеда равен " << V << endl;
            cout << "Площадь прямоугольного параллелепипеда равна " << S << endl;
            break;
        }
        case Exercise7:{
            cout << "Введите радиус круга" << endl;
            float R, L, S;
            cin >> R;
            L = 2*3.14*R;
            S = 3.14*pow(R,2);
            cout << "Длина окружности равна " << L << endl;
            cout << "Площадь круга равна " << S << endl;
            break;
        }
        case Exercise8:{
            cout << "Введите 2 числа" << endl;
            float a, b, avg;
            cin >> a >> b;
            avg = (a+b)/2;
            cout << "Среднее арифметическое равно " << avg <<  endl;
            break;
        }
        case Exercise9:{
            cout << "Введите 2 неотрицательных числа" << endl;
            float a, b, avg;
            cin >> a >> b;
            avg = sqrt(a*b);
            cout << "Среднее геометрическое равно " << avg <<  endl;
            break;
        }
        default:
        cout << "Неккоректный ввод"<<endl;
            system ("pause");
            return 1;
            break;
        }
    cout << "1-Relaunch program\nother int input for exit" << endl;
    cin >> secondChoice;
    }
    return 0;
}