#include <iostream>
#include <bitset>
// bitset --> 이진수로 출력해줌
int main()
{
    using namespace std;

    // << left shift
    // >> right shift
    // ~, &, |, ^

    unsigned int a = 3;    
    cout << std::bitset<8>(a) << " " << a << endl;
    cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl;
    cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;
    cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;
    cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;

    printf("\n");
    unsigned int b = 1024;
    cout << std::bitset<16>(b) << " " << b << endl;
    cout << std::bitset<16>(b >> 1) << " " << (b >> 1) << endl;
    cout << std::bitset<16>(b >> 2) << " " << (b >> 2) << endl;
    cout << std::bitset<16>(b >> 3) << " " << (b >> 3) << endl;
    cout << std::bitset<16>(b >> 4) << " " << (b >> 4) << endl;

    printf("\n");
    cout << std::bitset<16>(~b) << " " << ~(b) << endl;

    printf("\n");
    unsigned int c = 0b1100;
    unsigned int d = 0b0110;
    
    cout << c << " " << d << endl;
    cout << std::bitset<4>(c & d) << endl; // bitwise AND
    cout << std::bitset<4>(c | d) << endl; // bitwise OR
    cout << std::bitset<4>(c ^ d) << endl; // bitwise XOR

    a &= b; // bitwise operator 역시 축약형태 쓸 수 있음



    return 0;
}