//#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

const int Exercise1=1, Exercise2=2, Exercise3=3, Exercise4=4,Exercise5=5, Exercise6=6,
Exercise7=7, Exercise8=8, Exercise9=9, Exercise10=10, Exercise11=11, Exercise12=12;
const int Relaunch=1,Exit=2;

int main()
{
    setlocale(LC_ALL, "Russian");
    int secondChoice = 1;
    while (secondChoice == 1){
        unsigned short int choice = 0;
        system("cls");
        cout << "Выберите задание от 1 до 12" << endl;
        cin >> choice;
        if (choice<=12){
            cout << "Begin"<<choice<<".\n";
        }
        switch (choice)
        {
        case Exercise1:{
            cout << "Введите длину в сантимтрах" << endl;
            int Lcm, Lm;
            cin >> Lcm;
            Lm = Lcm / 100;
            cout << "Полных метров " << Lm << endl;
            break;
        }
        case Exercise2:{
            cout << "Введите массу в килограммах" << endl;
            int Mkg, Mt;
            cin >> Mkg;
            Mt = Mkg / 1000;
            cout << "Полных тонн " << Mt << endl;
            break;
        }
        case Exercise3:{
            cout << "Введите сколько байт" << endl;
            int Ib, Ikb;
            cin >> Ib;
            Ikb = Ib / 1024;
            cout << Ib << " байт = " << Ikb << " полных килобайт"<< endl;
            break;
        }
        case Exercise4:{
            cout << "Введите длину A и B в сантиметрах" << endl;
            int A, B, k;
            cin >> A >> B;
            k = A / B;
            cout << "Количество отрезков равно " << k << endl;
            break;
        }
        case Exercise5:{
            cout << "Введите длину A и B в сантиметрах" << endl;
            int A, B, k;
            cin >> A >> B;
            k = A % B;
            cout << "Длина незанятой части равна " << k << " см" << endl;
            break;
        }
        case Exercise6:{
            cout << "Введите двузначное число" << endl;
            int a, aLeft, aRight;
            cin >> a;
            if (a<100 && a>=10) {
            aLeft = a/10;
            aRight = a%10;
            cout << "Левая цифра - " << aLeft << endl;
            cout << "Правая цифра - " << aRight << endl;
            }
            else
                cout << "Неккоректный ввод" << endl;
            break;
        }
        case Exercise7:{
            cout << "Введите двузначное число" << endl;
            int a, aLeft, aRight, aSum, aMult;
            cin >> a;
            if (a<100 && a>=10) {
            aLeft = a/10;
            aRight = a%10;
            aSum = aLeft + aRight;
            aMult = aLeft * aRight;
            cout << "Сумма цифр равна " << aSum << endl;
            cout << "Произведение цифр равно " << aMult << endl;
            }
            else
                cout << "Неккоректный ввод" << endl;
            break;
        }
        case Exercise8:{
            cout << "Введите двузначное число" << endl;
            int a, aLeft, aRight, aPerm;
            cin >> a;
            if (a<100 && a>=10) {
            aLeft = a/10;
            aRight = a%10;
            aPerm = aRight*10 + aLeft;
            cout << "число, полученное при перестановке цифр исходного числа " << aPerm << endl;
            }
            else
                cout << "Неккоректный ввод" << endl;
            break;
        }
        case Exercise9:{
            cout << "Введите трёхзначное число" << endl;
            int a, aFirstNum;
            cin >> a;
            if (a<1000 && a>=100) {
            aFirstNum = a/100;
            cout << "Первая цифра - " << aFirstNum << endl;
            }
            else
                cout << "Неккоректный ввод" << endl;
            break;
        }
        case Exercise10:{
            cout << "Введите трёхзначное число" << endl;
            int a, aLastNum, aMidNum;
            cin >> a;
            if (a<1000 && a>=100) {
            aLastNum = a%10;
            aMidNum = a/10%10;
            cout << "Последняя цифра - " << aLastNum << endl;
            cout << "Средняя цифра - " << aMidNum << endl;
            }
            else
                cout << "Неккоректный ввод" << endl;
            break;
        }
        case Exercise11:{
            cout << "Введите трёхзначное число" << endl;
            int a, aLastNum, aMidNum, aFirstNum, aSum, aMult;
            cin >> a;
            if (a<1000 && a>=100) {
            aLastNum = a%10;
            aMidNum = a/10%10;
            aFirstNum = a/100;
            aSum = aFirstNum + aMidNum + aLastNum;
            aMult = aFirstNum * aMidNum * aLastNum;
            cout << "Сумма цифр равна " << aSum << endl;
            cout << "Произведение цифр равно " << aMult << endl;
            }
            else
                cout << "Неккоректный ввод" << endl;
            break;
        }
        case Exercise12:{
            cout << "Введите трёхзначное число" << endl;
            int a, aLastNum, aMidNum, aFirstNum, aReverse;
            cin >> a;
            if (a<1000 && a>=100) {
            aLastNum = a%10;
            aMidNum = a/10%10;
            aFirstNum = a/100;
            aReverse = aFirstNum + aMidNum*10 + aLastNum*100;
            cout << "Число, полученное при прочтении исходного числа справа налево " << aReverse << endl;
            }
            else
                cout << "Неккоректный ввод" << endl;
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