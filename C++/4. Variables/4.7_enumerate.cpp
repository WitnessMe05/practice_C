#include <iostream>
#include <typeinfo>
#include <string>
int computeDamage(int weapon_id)
{
    if (weapon_id == 0) //sword
        return 1;
    if (weapon_id == 1) // hammer
        return 2; // weapon_id 등에서 실수 생길 수 있음. --> 열거형 자료 사용
}

enum Color // user-defined data types
{
    COLOR_BLACK,
    COLOR_RED,
    COLOR_BLUE,
    COLOR_GREEN,
    // BLUE,
};

enum Feeling
{
    HAPPY = -3,
    JOY,
    BLUE, // 위에서 겹치는 것 있으면 컴파일 안됨
    TIRED,
};

int main()
{
    using namespace std;

    Color paint = COLOR_BLACK;
    Color house(COLOR_BLUE);
    Color apple{COLOR_RED};

    cout << paint << " " << COLOR_BLACK << endl;

    int color_id = COLOR_RED;
    cout << color_id << endl;

    // Color my_color = color_id; 안돼
    Color my_color = static_cast<Color>(color_id);
    
    // cin >> my_color; 안돼 
    string str_input;
    std::getline(cin, str_input);

    if (str_input == "COLOR_BLACK") my_color = COLOR_BLACK; // not recommended
    // ...

    
    return 0;
}