#include <iostream>

using namespace std;

int main()
{
    while(true)
    {
        int *ptr = new int;
        cout << ptr << endl;
        delete ptr; // 이부분 없으면 메모리 계속 새로 받아옴
    }
}