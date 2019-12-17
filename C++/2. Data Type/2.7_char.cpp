#include <iostream>

int main()
{
    using namespace std;
    
    // char c1(65);
    // char c2('A');

    // cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

    // // c-style casting
    // cout << (char)65 << endl;
    // cout << (int)'A' << endl;

    // // cpp style
    // cout << char(65) << endl;
    // cout << int('A') << endl;

    // cout << static_cast<char>(65) << endl;
    // cout << static_cast<int>('A') << endl;
    
    // char ch(97);
    // cout << ch << endl;
    // cout << static_cast<int>(ch) << endl;
    // cout << ch << endl;

    // char c1(65);

    // cin >> c1;
    // cout << c1 << " " << static_cast<int>(c1) << endl;

    // cin >> c1;
    // cout << c1 << " " << static_cast<int>(c1) << endl;
    
    // cin >> c1;
    // cout << c1 << " " << static_cast<int>(c1) << endl;
    
    char c1(65);

    cout << sizeof(char) << endl;
    cout << (int)std::numeric_limits<char>::max() << endl;
    cout << (int)std::numeric_limits<char>::lowest() << endl;
    cout << "\a second" << endl;
    return 0;
}