#include <iostream>
#include <string>
using namespace std;

int addInt(int x, int y)
{
    return x + y;
}

double addDouble(double x, double y)
{
    return x + y;
}
// 원래 인풋 타입에 따라 함수의 타입도 다르게 정의해야 함
// 함수 오버로딩 --> 이름을 같게 만들면 컴파일러가 판단하여 컴파일 해줌
// 매개변수가 다르면 다른함수로 취급한다.** -- > return type이 다른것 만으로는 함수 오버로딩 불가능

int add(int x, int y)
{
    return x + y;
}
double add(double x, double y)
{
    return x + y;
}

int main()
{
    add(1, 2);
    add(3.0, 4.0);
}