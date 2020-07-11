#include <iostream>

using namespace std;
// void printNumber(const int my_number)
// {
//     cout << my_number << endl;
// }

// int main()
// {

//     const double gravity{ 9.8 }; // 바꿀 수 없기 때문에 initialize 항상 해줘야함
//     printNumber(123);
//     //gravity = 12; // const로 설정하면 바꿀 수 없어

//     return 0;
// }

int main()
{
    int number;
    cin >> number;

    constexpr int my_const(123); // 컴파일 중에 확정하는 상수

    const int special_number(number); // 입력하고 나면 이 값은 항상 고정됨 --> 런타임중에 확정되는 상수


    return 0;
}