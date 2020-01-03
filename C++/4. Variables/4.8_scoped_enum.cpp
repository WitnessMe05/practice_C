#include <iostream>

int main()
{
    using namespace std;

    enum class Color
    {
        RED,
        BLUE,
    };

    enum class Fruit
    {
        BANANA,
        APPLE,
    };

    Color color1 = Color::RED;
    Color color2 = Color::BLUE;
    Fruit fruit = Fruit::BANANA;

    if (color1 == color2) // class 사용 안하면 가능해 --> 둘다 정수 0으로 나와서 같은걸로 판별
        cout << "SAME" << endl;
}