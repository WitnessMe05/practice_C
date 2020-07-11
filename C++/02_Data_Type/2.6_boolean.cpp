#include <iostream>

bool isEqual(int a, int b) {
    bool result = ( a == b);

    return result;
}

int main () {
    using namespace std;

    // bool b1 = true;
    // bool b2(true);
    // bool b3{false};

    // cout << std::boolalpha;
    // cout << isEqual(1, 1) << endl;
    // cout << isEqual(0, 3) << endl;
    
    // if (0) {
    //     cout << "True" << endl;
    // }
    // else
    // {
    //     cout << "False" << endl;
    // }
    
    bool b;

    cin >> b;
    cout << std::boolalpha;
    cout << "Your Input: " << b << endl;

    return 0;
}