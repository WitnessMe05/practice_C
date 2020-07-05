#include <cassert> // assert.h
#include <array>
#include <iostream>

void printValue(const std::array<int, 5> &my_array, const int& ix)
{
    assert(ix >= 0);
    assert(ix <= my_array.size() - 1);
    std::cout << my_array[ix] << std::endl;
}

int main()
{
    int number = 5;

    assert(number == 5); // debug모드에서만 작동한다. 
    /* 프로그래머가 오류가 날 것 같은곳에 넣어서 제대로 작동하는지 확인할 수 있다.*/

    std::array<int, 5> my_array{1, 2, 3, 4, 5};

    printValue(my_array, 100);

    return 0;
}