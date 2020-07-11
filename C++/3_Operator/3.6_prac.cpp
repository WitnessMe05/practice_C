#include <iostream>

int main()
{
    using namespace std;

    cout << ((true && true) || false) << endl; //t
    cout << ((false && true) || true) << endl; // t
    cout << ((false && true) || false || true) << endl; // t
    cout << ((14 > 13 || 2 > 1) && (9 > 1)) << endl; // t
    cout << !(2314123 > 2 || 123123 > 2387) << endl; // f

    bool v1 = true;
    bool v2 = false;
    bool v3 = false;

    bool r1 = v1 || v2 && v3;
    bool r2 = (v1 || v2) && v3;
    bool r3 = v1 || (v2 && v3);
    // &&가 ||보다 우선순위: 괄호로 명확하게 해주자
    cout << r1 << endl;
    cout << r2 << endl;
    cout << r3 << endl;
    
}