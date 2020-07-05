#include <cassert>
#include <iostream>
using namespace std;

int main()
{
    const int x = 5; // 10이면?
    assert(x == 5);

    static_assert(x == 5, "x should be 5"); // 컴파일에서 정해져야 작동함
}