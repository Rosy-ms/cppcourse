//#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <clocale>

using namespace std;

const int Exercise1=1, Exercise2=2, Exercise3=3, Exercise4=4,Exercise5=5,
Exercise6=6, Exercise7=7,Exercise8=8, Exercise9=9, Exercise10=10,
Exercise11=11, Exercise12=12, Exercise13=13, Exercise14=14, Exercise15=15;
const int Relaunch=1,Exit=2;

int main()
{
    std::cout << std::boolalpha;
    setlocale(LC_ALL, "Russian");
    int secondChoice = 1;
    while (secondChoice == 1){
        unsigned short int choice = 0;
        system("cls");
        cout << "Выберите задание от 1 до 15" << endl;
        cin >> choice;
        if (choice<=15){
            cout << "Begin"<<choice<<".\n";
        }
        switch (choice)
        {
        case Exercise1:{
            cout << "Введите целое число" << endl;
            int a;
            cin >> a;
            cout << (a > 0) << endl;
            break;
        }
        case Exercise2:{
            cout << "Введите целое число" << endl;
            int a;
            cin >> a;
            cout << (a % 2 == 1) << endl;
            break;
        }
        case Exercise3:{
            cout << "Введите целое число" << endl;
            int a;
            cin >> a;
            cout << (a % 2 == 0) << endl;
            break;
        }
        case Exercise4:{
            cout << "Введите 2 целых числа" << endl;
            int a, b;
            cin >> a >> b;
            cout << (a > 2 && b  <= 3) << endl;
            break;
        }
        case Exercise5:{
            cout << "Введите 2 целых числа" << endl;
            int a, b;
            cin >> a >> b;
            cout << (a >= 0 || b  < -2) << endl;
            break;
        }
        case Exercise6:{
            cout << "Введите 3 целых числа" << endl;
            int a, b, c;
            cin >> a >> b >> c;
            cout << (a < b && b < c) << endl;
            break;
        }
        case Exercise7:{
            cout << "Введите 3 целых числа" << endl;
            int a, b, c;
            cin >> a >> b >> c;
            cout << ((a < b && b < c) || (b < a && b > c)) << endl;
            break;
        }
        case Exercise8:{
            cout << "Введите 2 целых числа" << endl;
            int a, b;
            cin >> a >> b;
            cout << (a % 2 == 1 && b % 2 == 1) << endl;
            break;
        }
        case Exercise9:{
            cout << "Введите 2 целых числа" << endl;
            int a, b;
            cin >> a >> b;
            cout << (a % 2 == 1 || b % 2 == 1) << endl;
            break;
        }
        case Exercise10:{
            cout << "Введите 2 целых числа" << endl;
            int a, b;
            cin >> a >> b;
            cout << ((a % 2 == 1 && b % 2 == 0) || (a % 2 == 0 && b % 2 == 1)) << endl;
            break;
        }
        case Exercise11:{
            cout << "Введите 2 целых числа" << endl;
            int a, b;
            cin >> a >> b;
            cout << ((a % 2 == 1 && b % 2 == 1) || (a % 2 == 0 && b % 2 == 0)) << endl;
            break;
        }
        case Exercise12:{
            cout << "Введите 3 целых числа" << endl;
            int a, b, c;
            cin >> a >> b >> c;
            cout << (a > 0 && b > 0 && c > 0) << endl;
            break;
        }
        case Exercise13:{
            cout << "Введите 3 целых числа" << endl;
            int a, b, c;
            cin >> a >> b >> c;
            cout << (a > 0 || b > 0 || c > 0) << endl;
            break;
        }
        case Exercise14:{
            cout << "Введите 3 целых числа" << endl;
            int a, b, c;
            cin >> a >> b >> c;
            cout << ((a > 0 && b < 0 && c < 0) || (a < 0 && b > 0 && c < 0) || (a < 0 && b < 0 && c > 0)) << endl;
            break;
        }
        case Exercise15:{
            cout << "Введите 3 целых числа" << endl;
            int a, b, c;
            cin >> a >> b >> c;
            cout << ((a > 0 && b > 0 && c < 0) || (a < 0 && b > 0 && c > 0) || (a > 0 && b < 0 && c > 0)) << endl;
            break;
        }
        default:
            cout << "Неккоректный ввод"<<endl;
            system ("pause");
            return 1;
            break;
        }
    cout << "1 - перезапустить программу\nДругое целое число - выход" << endl;
    cin >> secondChoice;
    }
    return 0;
}