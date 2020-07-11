#include <iostream>

using namespace std;

struct Something
{
    int a, b, c, d;
};

int main()
{
    int x = 5;
    double d = 1.5;

    cout << x << endl;
    cout << (long long)&x << endl;  // &: address-of operator

    // de-reference operator (*)
    cout << *&x << endl; // * : 해당 주소가 가리키는 것을 출력 


    int *ptr_x = &x;
    double *ptr_d = &d;

    cout << ptr_x << endl;
    cout << *ptr_x << endl;
    cout << typeid(ptr_x).name() << endl;

    // pointer 자체의 크기는 같지만 (주소값이니까) 
    // 그 주소에 담긴 값의 크기는 달라
    // 64bit에서는 주소가 8바이트
    cout << sizeof(x) << endl;
    cout << sizeof(d) << endl;
    
    cout << sizeof(&x) << " " << sizeof(ptr_x) << endl;
    cout << sizeof(&d) << " " << sizeof(ptr_d) << endl;
 
    cout << ptr_d << endl;
    cout << *ptr_d << endl;

    Something ss;
    Something *ptr_s;

    cout << sizeof(Something) << endl; // 4 * 4 bytes
    cout << sizeof(ptr_s) << endl;     // 포인터는 8 bytes (주소 크기 고정)

}