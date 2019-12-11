// char, int, float, double, boolean
// unsigned intiger는 음수를 포함하지 않는다

#include <iostream>
#include <bitset>

int main() {
    using namespace std;

    char chValue = 'H';
    bool bValue = false;
    float fValue = 3.141592f;
    double dValue = 3.141592;

    auto aValue = 3.141592;
    auto aValue2 = 3.141592f;

    cout << (bValue ? 1 : 0) << endl;
    cout << (int)chValue << endl; // char과 bool은 내부적으로 int로 저장한다
    cout << fValue << endl;
    cout << dValue << endl;
    cout << "" << endl;
    printf("\n");
    cout << sizeof(aValue) << endl;
    cout << sizeof(aValue2) << endl;
    return 0;
}