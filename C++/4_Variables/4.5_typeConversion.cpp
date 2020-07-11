#include <iostream>
#include <typeinfo>
#include <iomanip>
int main()
{
    using namespace std;

    int a = 123;

    cout << typeid(a).name() << endl;

    // numetic conversion
    int i = 100000;
    char c = i;

    cout << static_cast<int>(c) << endl; // char에 담을 수 없어

    double d = 0.123456789;
    float f = d;

    cout << std::setprecision(12) << f << endl;

    cout << 5u - 10u << endl;
    return 0;
}