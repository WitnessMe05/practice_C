#include <iostream>
#include <cmath>
#include <limits>

int main() {
    using namespace std;

    short   s = 1;
    int     i = 1;
    long    l = 1;
    long long ll = 1;

    // cout << sizeof(short) << endl; // 2 bytes = 2 * 8 = 16 bits
    // cout << pow(2, sizeof(short) * 8 - 1) - 1 << endl;
    // cout << numeric_limits<short>::max() << endl;
    // cout << numeric_limits<short>::min() << endl;
    // cout << numeric_limits<short>::lowest() << endl;
    // printf("\n");

    s = 32767;
    s = s + 1; // 32768
    cout << "32768? " << s << endl; // overflow

    short sm = numeric_limits<short>::min();
    sm = s - 1;
    cout << "min()? " << sm << endl; // overflow

    // cout << sizeof(int) << endl;
    // cout << sizeof(long) << endl;
    // cout << sizeof(long long) << endl;

    unsigned int ui = -1;
    cout << ui << endl;

    int a = 20 / 4;
    int b = 22 / 4;
    cout << a << endl;
    cout << b << endl;
    cout << 22 / 4 << endl; // 정수끼리의 연산은 정수로 결과 출력

}