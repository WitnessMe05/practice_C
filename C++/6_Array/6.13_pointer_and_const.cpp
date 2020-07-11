#include <iostream>

int main()
{
    using namespace std;
    const int v = 5;
    const int *ptr = &v;
    // *ptr = 6; --> v = 6 --> v const이므로 값 못바꾸니까 derefencing으로 값 못바꿈
    cout << *ptr << endl;
    
    int v2 = 5;
    const int *ptr2 = &v2;
    // *ptr = 6;
    v2 = 6; // ptr은 const이므로 못바꾸지만 v2자체는 바꿀 수 있어
    cout << *ptr2 << endl;

    int value1 = 5;
    const int *pt = &value1; // const int --> 주소값에 저장된 값을 안바꾸는거지 다른 주소를 넣는 것은 가능
    int value2 = 6;
    pt = &value2;


    int val = 5;
    int *const p = &val; // p에 저장된 주소값 자체를 바꿀 수 없음 

    *p = 10;
    cout << *p << endl;

    int val2 = 8;
    // p = &val2; --> 


    int x = 5;
    const int *p1 = &x;
    int *const p2 = &x;
    const int *const p3 = &x;
    // 함수 parameter로 array넣을때 쓰임 
}