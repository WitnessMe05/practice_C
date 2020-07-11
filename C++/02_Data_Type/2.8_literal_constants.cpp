#include <iostream>

int main()
{
    using namespace std;

    float pi = 3.14f; // double은 l (long double), L (long), LL, uL(unsigned long)
    int i = -1234u; // u는 unsigned임 

    unsigned int n = 5u;
    long n2 = 5L;
    double d = 6.0e-10;

    //Decimal : 0 1 2 3 4 5 6 7 8 9 10
    //Octal   : 0 1 2 3 4 5 6 7 8 10 11 12
    //Hexa    : 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

    int x = 012; // 8진수가 된 것.
    int y = 0xF; // 16진가수 된 것
    int z = 0b1011'1111'1010; // 2진수로 바로 입력, C++ 14부터 '표시 넣으면 컴파일러가 무시 (읽기 편해져) -> 10진수 등에도 사용 가능
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;

    const int price_per_item = 10; // 상수도 이렇게 해놓는것이 좋아
    int num_items = 123;
    int price = num_items * price_per_item;
    return 0;
}