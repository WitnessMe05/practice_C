#include <iostream>

int main()
{
    using namespace std;

    bool onSale = true;

    const int price = (onSale == true)? 10: 100;

    int x = 5;
    cout << ((x % 2 == 0)? "even" : "odd") << endl;
}