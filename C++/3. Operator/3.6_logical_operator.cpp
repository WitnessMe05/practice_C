#include <iostream>

int main()
{
    using namespace std;

    // logical NOT
    bool a = true;
    cout << !a << endl;

    // logical AND
    bool x = true;
    bool y = false;
    cout << (x && y) << endl;

    // bool hit = true;
    // int health = 10;

    // if (hit == true && health < 20)
    // {
    //     cout << "die " << endl;
    // }
    // else
    //     health -= 20;

    // locigal OR
    bool i = true;
    bool j = false;
    cout << (x || y) << endl;

    // int m = 5;
    // int n = 7;
    // if (m != n) // !(m == n)
    // {
    //     cout << "x does not equal y" << endl;
    // }
    // else
    // {
    //     cout << "x equals y";
    // }
    
    // short circuit evaluation
    int p = 2;
    int q = 2;
    if (p == 1 && q++ == 2) 
    // &&의 경우 앞의 조건이 만족하지 않으면 뒤의 것은 계산 안해
    {
        // do something
    }
    cout << q << endl;

    // De Morgan's Law
    !(x && y); // --> !x || !y
    !(x || y); // --> !x && !y

    // XOR
    cout << (x != y) << endl;
}