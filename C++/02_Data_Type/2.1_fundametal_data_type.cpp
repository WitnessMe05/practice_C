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

    // cout << (bValue ? 1 : 0) << endl;
    // cout << (int)chValue << endl; // char과 bool은 내부적으로 int로 저장한다
    // cout << fValue << endl;
    // cout << dValue << endl;
    // cout << "" << endl;
    // cout << sizeof(aValue) << endl;
    // cout << sizeof(aValue2) << endl;

    // Initialization
    int a(123); // direct initialization
    int b{ 123 }; // uniform initialization
    int a = 123; // copy initialization
    // copy와 direct는 맞지 않는 자료형이 들어와도 맞게 바꿔서 저장함, uniform에서는 더 엄격하게 적용해서 error 발생

    int k, l; // 두 개 이상 동시에 선언, 같은 type 끼리만 가능
    int x = 10, y(11), z{12};
    return 0;
}