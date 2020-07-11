#include <iostream>

int add(int a, int b) 
{
    return a + b;
}
// int main()
// {
//     using namespace std;
    
//     int x = 6, y = 6;
//     cout << x << " " << y << endl;
//     cout << x++ << " " << y-- << endl;
//     cout << x << " " << y << endl;
//     printf("\n");
//     int a = 6, b = 6;
//     cout << a << " " << b << endl;
//     cout << ++a << " " << --b << endl;
//     cout << a << " " << b << endl;
//     cout << a++ << " " << b-- << endl;
//     cout << a << " " << b << endl;
//     return 0;
// }

int main()
{
    using namespace std;
    int x = 1, y = 2;
    //int v = add(x, ++x); // do not use
    int k = add(x, ++y);
    //cout << v << endl;
    cout << k << endl;
}

// x = x++; -> do not use
// == ++x;