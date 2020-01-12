#include <iostream>

using namespace std;


const char* getName()
{
    return "Jack Jack";
}

int main()
{
    const char *name = "Jack Jack";
    const char *name2 = "Jack Jack2"; // 둘이 같으면 컴파일러가 같은 메모리를 할당
    const char *name3 = getName();
    cout << uintptr_t(name) << endl;
    cout << uintptr_t(name2) << endl;
    cout << uintptr_t(name3) << endl;
}