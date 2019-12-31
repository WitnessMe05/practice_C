#include <iostream>

int main()
{
    using namespace std;

    int x = 7;
    int y = -x; // 단항 연산자
    // + - * / 기본적인 사칙연산
    int z = 4;
    int k = x % z;

    cout << x / z << " " << k << endl; // 정수 나머지
    cout << x / z << endl;
    cout << float(x) / z << endl;
    cout << x / float(z) << endl;
    cout << float(x) / float(z) << endl;
    
    int a = x;
    a += x; // a = a + x
    cout << a << endl;
    a %= z; // a = a % z
    cout << a << endl;

    return 0;
}