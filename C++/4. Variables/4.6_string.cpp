#include <iostream>
#include <string>

using namespace std;

int main()
{
    const char my_strs [] = "Hello, World";
    const string my_hello { "Hello, World"};

    cout << my_strs << endl;
    cout << my_hello << endl;

    string my_ID = "123";
    cout << my_ID << endl;

    return 0;
}