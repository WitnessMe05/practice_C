#include <iostream>

auto add(int x, int y) // 함수 출력값을 자동으로!, parameter는 auto로 사용 못해
{
    return x + double(y);
}

auto mul(double x, double y) -> double
{
    return x * y;
}

int main()
{
    using namespace std;

    auto a = 123; // 형 추론 
    //auto b; // can't use without initialize
    auto c = 123.0;
    auto d = 1 + 2;
    auto e = 1 + 2.0;

    auto result = add(1, 2); // return 값도 자동으로 
    auto result2 = mul(3.1, 4.0);

    cout << result2 << endl;
    return 0;
}