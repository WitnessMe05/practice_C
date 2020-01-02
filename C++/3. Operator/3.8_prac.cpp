#include <iostream>
#include <bitset>

int main()
{
    using namespace std;

    unsigned int a = 0b0110;

    cout << (a >> 2) << endl;
    printf("\n");
    cout << std::bitset<4>(5) << " " << std::bitset<4>(12) << endl;
    cout << std::bitset<4>(5 | 12) << endl;
    cout << std::bitset<4>(5 & 12) << endl;
    cout << std::bitset<4>(5 ^ 12) << endl;
}