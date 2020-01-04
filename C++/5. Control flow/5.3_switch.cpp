#include <iostream>

using namespace std;

enum class Color
{
    BLACK,
    WHITE,
    RED,
    GREEN,
    BLUE,
};

void printColorName(Color color)
{
    switch(color)
    {
    case Color::BLACK:
        cout << "BLACK" << endl;
        break;
        
    case Color::WHITE:
        cout << "WHITE" << endl;
        break;
    case Color::RED:
        cout << "RED" << endl;
        break;
    case Color::GREEN:
        cout << "GREEN" << endl;
        break;
    case Color::BLUE:
        cout << "BLUE" << endl;
        break;

    }
}

void printColorName2(Color color)
{
    switch(static_cast<int>(color))
    {
    case 0:
        cout << "BLACK" << endl;
        break;
        
    case 1:
        cout << "WHITE" << endl;
        break;
    case 2:
        cout << "RED" << endl;
        break;
    case 3:
        cout << "GREEN" << endl;
        break;
    case 4:
        cout << "BLUE" << endl;
        break;

    }
}

int main()
{
    printColorName(Color::BLACK);
    printColorName2(Color::BLUE);
    
    int x;
    cin >> x;

    switch(x)
    {
        case 0:
            cout << "zero" << endl;
        case 1:
            cout << "one" << endl;
        default:
            cout << "undefied" << endl;
    }
}