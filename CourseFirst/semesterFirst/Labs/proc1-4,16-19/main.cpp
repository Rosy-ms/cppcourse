#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

float RingS(float R1, float R2){
    float S = std::abs(3.14*pow(R1,2)- 3.14*pow(R2,2));
    return S;
}

int main(){
    float A, B;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter values: "; cin >> A >> B;
        float D = RingS(A,B);
        cout << D << endl;
    }
    system("pause");
    return 0;
}