#include <iostream>
#include <cstdlib>
#include <clocale>
#include <cmath>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");

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
    /*
    int operation;
    float a,b,res;
    cout << "Введите номер действия" << endl;
    cin >> operation;
    cout << "Введите два числа" << endl;
    cin >> a >> b;
    switch (operation)
    {
    case 1:
        res = a+b;
        cout << "a+b=" << res << endl;
        break;
    case 2:
        res = a-b;
        cout << "a-b=" << res << endl;
        break;
    case 3:
        res = a*b;
        cout << "a*b=" << res << endl;
        break;
    case 4:
        res = a/b;
        cout << "a/b=" << res << endl;
        break;
    }
    */
    /*
    int masstype;
    cout << "1 — килограмм,\n2 — миллиграмм,\n3 — грамм,\n4 — тонна,\n5 — центнер\n";
    float mass,res;
    cout << "Введите номер единицы массы" << endl;
    cin >> masstype;
    cout << "Введите массу тела в этих единицах" << endl;
    cin >> mass;
    switch (masstype)
    {
    case 1:
        res = mass*1;
        cout << res << endl;
        break;
    case 2:
        res = mass*0.000001;
        cout << res << endl;
        break;
    case 3:
        res = mass*0.001;
        cout << res << endl;
        break;
    case 4:
        res = mass*1000;
        cout << res << endl;
        break;
    case 5:
        res = mass*100;
        cout << res << endl;
        break;
    }
    */
    /*
    cout << "Введите D,M\n";
    int D,M;
    cin >> D >> M;
    switch (D)
    {
    case 28:
        switch (M)
        {
        case 2:
            D=1;
            M++;
            break;
        
        default:
            D++;
            break;
        }
            break;
    case 30:
        switch (M)
        {
        case 4:
            D=1;
            M++;
            break;
        case 6:
            D=1;
            M++;
            break;
        case 11:
            D=1;
            M++;
            break;
        default:
        D++;
            break;
        }
        break;
    case 31:
        switch (M)
        {
        case 1:
            D=1;
            M++;
            break;
        case 3:
            D=1;
            M++;
            break;
        case 5:
            D=1;
            M++;
            break;
        case 7:
            D=1;
            M++;
            break;
        case 8:
            D=1;
            M++;
            break;
        case 10:
            D=1;
            M++;
            break;
        case 12:
            D=1;
            M=1;
            break;
        default:
            D++;
            break;
        }
    break;
    default:
        D++;
        break;
    }
    cout << "Day = " << D << endl;
    cout << "Month = " << M << endl;
    */
    /*
    cout << "Введите ориентацию\n";
    char C;
    cin >> C;
    cout << "Введите две операции\n";
    int N1,N2,res;
    cin >> N1 >> N2;
    res = N1+N2;
    switch (res)
    {
    case -2:
        res=2;
        break;
    case -1:
        res=3;
        break;
    case 4:
        res=2;
        break;
    
    }
    switch (C)
    {
        case 'С':
            switch (res)
            {
            case 0:
                cout << "Север\n";
                break;
            case 1:
                cout << "Запад\n";
                break;
            case 2:
                cout << "Юг\n";
                break;
            case 3:
                cout << "Восток\n";
                break;
            }
        break;
        case 'З':
            switch (res)
            {
            case 0:
                cout << "Запад\n";
                break;
            case 1:
                cout << "Юг\n";
                break;
            case 2:
                cout << "Восток\n";
                break;
            case 3:
                cout << "Север\n";
                break;
            }
        break;
        case 'Ю':
            switch (res)
            {
            case 0:
                cout << "Юг\n";
                break;
            case 1:
                cout << "Восток\n";
                break;
            case 2:
                cout << "Север\n";
                break;
            case 3:
                cout << "Запад\n";
                break;
            }
        break;
        case 'В':
            switch (res)
            {
            case 0:
                cout << "Восток\n";
                break;
            case 1:
                cout << "Север\n";
                break;
            case 2:
                cout << "Запад\n";
                break;
            case 3:
                cout << "Юг\n";
                break;
            }
        break;
    }
    */
    
    int n;
    float x, a, c, h, s;
    cout<<"Номер элемента:";
    cin>>n;
    cout<<"Длина:";
    cin>>x;
 
    switch (n) {
    case 1:
        a = x;
        c = a * sqrt(2.0);
        h = c / 2;
        s = c * h / 2;
        cout << "c=" << c << endl << "h=" << h << endl << "S=" << s << endl;
        break;
    case 2:
        c = x;
        a = c / sqrt(2.0);
        h = c / 2;
        s = c * h / 2;
        cout << "a=" << a << endl << "h=" << h << endl << "S=" << s << endl;
        break;
    case 3:
        h = x;
        c = 2 * h;
        a = c / sqrt(2.0);
        s = c * h / 2;
        cout << "a=" << a << endl << "c=" << c << endl << "S=" << s << endl;
        break;
    case 4:
        s = x;
        h = sqrt(s);
        c = 2 * h;
        a = c / sqrt(2.0);
        cout << "a=" << a << endl << "c=" << c << endl << "h=" << h << endl;
        break;
    }
    
    /*
    int n, m;
    cout << "Введите достоинство и масть";
    cin >> n >> m;
    switch (n) {
    case 6:
        cout << "шестёрка ";
        break;
    case 7:
        cout << "семёрка ";
        break;
    case 8:
        cout << "восьмёрка ";
        break;
    case 9:
        cout << "девятка ";
        break;
    case 10:
        cout << "десятка ";
        break;
    case 11:
        cout << "валет ";
        break;
    case 12:
        cout << "дама ";
        break;
    case 13:
        cout << "король ";
        break;
    case 14:
        cout << "туз ";
        break;
    }
 
    switch (m) {
    case 1:
        cout << "пик\n";
        break;
    case 2:
        cout << "треф\n";
        break;
    case 3:
        cout << "бубен\n";
        break;
    case 4:
        cout<<"червей\n";
        break;
    }
    */
    system ("pause");
    return 0;
}