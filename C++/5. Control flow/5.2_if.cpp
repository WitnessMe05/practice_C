#include <iostream>

using namespace std;

// int main()
// {
//     int x;
//     cin >> x;

//     if (x > 10)
//         cout << x << " is greater than 10" << endl;
//     else if (x < 10)
//     {
//         cout << x << " is less than 10" << endl;
//         cout << "Test1" << endl;
//     }
//     else
//     {
//         cout << "x is exactly 10" << endl;
//     }
// }

int main() 
{
    int x, y;
    cin >> x >> y;

    if (x > 0 && y > 0)
        cout << "both numbers are positive" << endl;
    else if (x > 0 || y > 0)
    {
        cout << "one of the numbers is positive" << endl;
    }
    else
    {
        cout << "Niether number is positive" << endl;
    }
    
    
}