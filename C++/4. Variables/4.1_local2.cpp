#include <iostream>

using namespace std;

void doSomething()
{
    int a = 1;
    ++a;
    cout << a << endl;
}
int a = 1;
void doSomething2()
{
    //static int a = 1;
    ++a;
    cout << a << endl;
}

int main()
{
    doSomething();
    doSomething();
    doSomething2();
    doSomething2();
    doSomething2();
    doSomething2();
}