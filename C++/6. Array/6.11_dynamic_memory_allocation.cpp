#include <iostream>

using namespace std;

int main()
{
    int arr[1000000]; // 정적할당은 stack
    //int var = 7;
    int *ptr = new int{7}; // 메모리 주소를 할당받는법, 위의 방법과 동일함
    int *ptr2 = new (std::nothrow) int{9}; // error없이 계속 실행시킨다

    cout << ptr << endl;
    cout << *ptr << endl;

    delete ptr; // 프로그램이 종료되면 원래 자동으로 os가 메모리를 수거하는데 그전에 미리 반납
    ptr = nullptr; // 해당 포인터에 주어진 주소를 불용처리

    cout << "After delete" << endl;
    if (ptr != nullptr)
    {
        cout << ptr << endl; // 주소는 변하지 않음
        cout << *ptr << endl;// 하지만 그안의 값은 이미 바뀜
    }
}