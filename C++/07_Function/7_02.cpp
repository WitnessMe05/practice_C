#include <iostream>

using namespace std;

void doSomething(int y)
{
    cout << "In func " << y << " " << &y << endl;
}

int main()
{
    doSomething(5);

    int x = 6;

    cout << "In main " << x << " " << &x << endl;
}

// main 에서 값이 복사되는 것. (함수 안과 밖이 메모리가 달라)