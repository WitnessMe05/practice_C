#include <iostream>
#include <cstddef>

using namespace std;

void doSomthing(double *ptr)
{
    cout << "address of pointer variable in doSomthing() " << &ptr << endl;

    if (ptr != nullptr)
    {
        // do something useful
        cout << *ptr << endl;
    }
    else
    {
        // do nothing
        cout << "Null ptr, do nothing" << endl;
    }
}

int main()
{
    double *ptr = nullptr;

    doSomthing(ptr);
    doSomthing(nullptr);

    double d = 123.4;
    doSomthing(&d);
    ptr = &d;

    doSomthing(ptr);


    std::nullptr_t nptr; // null pointer만 받을 수 있음

    cout << "address of pointer variable in main() " << &ptr << endl;
}
// doSomething의 parameter ptr과 main 안의 변수 ptr은 다른 메모리를 사용하는 것