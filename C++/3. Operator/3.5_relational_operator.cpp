#include <iostream>
#include <iomanip>

// int main()
// {
//     using namespace std;

//     int x, y;
//     cin >> x >> y;
//     cout << "Your input value are: " << x << " " << y << endl;

//     if (x == y)
//         cout << "equal" << endl;
//     if (x != y)
//         cout << "not equal" << endl;
//     if (x > y)
//         cout << "x is greater than y" << endl;
//     if (x < y)
//         cout << "x is less than y" << endl;
//     if (x >= y)
//         cout << "x is greater than y or equal to y" << endl;
//     if (x <= y)
//         cout << "x is less than y or equal to y" << endl;
// }

int main() 
{
    using namespace std;

    double d1(100 - 99.99); // 0.001
    double d2(10 - 9.99);   // 0.001
    const double epsilon = 1e-10;

    cout << std::setprecision(20); // 차이 보여줄 수 있게 자릿수 다 나오게
    cout << d1 << endl;
    cout << d2 << endl;
    cout << std::abs(d1 - d2) << endl;
    
    if (abs(d1-d2) < epsilon)
        cout << "Approximately equal" << endl;
    else
        cout << "Not equal" << endl;
    // if (d1 == d2)
    //     cout << "equal" << endl;
    // else
    // {
    //     cout << "Not equal" << endl;
    //     if (d1 > d2) cout << "d1 > d2 " << endl;
    //     else
    //     {
    //         cout << "d1 < d2 " << endl;
    //     }
         
    // }
    
}