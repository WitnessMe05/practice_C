#include <iostream>

using namespace std;


void printElements(int (&arr)[5]) // array로 받는 법
{
    for (int i = 0; i < 5; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void doSomething(int &n) // (const &n) 하면 아예 못바꾸게 할 수도 있어 
{
    n = 10;
    cout << "In doSomething " << n << endl;
    cout << &n << endl;
}

int main()
{
    int value = 5;

    int *ptr = nullptr;
    ptr = &value; // 기존의 포인터 사용법

    int &ref = value; // ref가 value의 메모리를 같이 하는 것처럼 작동
    // int &ref; --> reference는 반드시 초기화가 필요, 변수가 들어가야함!
    int x = 5;
    int &ref2 = x;
    const int y = 8;
    const int &ref3 = y; // const가 없으면 ref에서 const를 바꿀 수도 있기 때문에 필요!


    cout << ref << endl;

    ref= 10;

    cout << value << " " << ref << endl;
    cout << endl;

    cout << &value << endl; // value 변수의 주소
    cout << &ref << endl;   // ref가 가리키는 value변수가 가진 주소 (위와 동일함!)
    cout << ptr << endl;    // 포인터는 value 변수의 주소
    cout << &ptr << endl;   // 포인터 자체의 주소
    cout << endl;

    int value1 = 5;
    int value2 = 10;

    int &ref1 = value1;

    cout << ref1 << endl;
    ref1 = value2;
    cout << ref1 << endl;
    cout << endl;

    int n = 5;
    cout << n << endl;
    cout << &n << endl;
    doSomething(n);
    cout << n << endl; // doSomething의 parameter에 &만 붙이면 그게 그거로 다 바뀜
    // pointer는 자체 주소가 다르지만 약간 복잡,
    // reference는 그 자체가 넘어가기 때문에 복사할 필요가 없어, 효율 굿

}