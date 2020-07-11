#include <iostream>
#include "../header/MY_CONSTANTS.h"
using namespace std;

// int main()
// {
//     const int price_per_item(30);
//     int num_item = 123;
//     int price = num_item * price_per_item;

//     cout << price << endl;
//     return 0;

// }

int main()
{
    double radius;
    cin >> radius;

    double circumference = 2.0 * radius * constants::pi;
    cout << circumference << endl;
    return 0;
}