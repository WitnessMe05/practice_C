#include <iostream>
using namespace std;

void doSomething(int x) {
    x = 123;
    cout << x << endl;
}

int main() {
    int x = 0;
    cout << x << " " << &x << endl;

    {
        //int x = 1; // 새로 initialize 했기 때문에 새로운 메모리 주소로 저장됨
        x = 1;
        cout << x << " " << &x << endl;
    }
    cout << x << " " << &x << endl;


    int k = 0;
    cout << k << endl;
    doSomething(k);
    cout << k << endl;

}
