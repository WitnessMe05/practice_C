/* inline 함수 
compiler가 처리할 때 빨라져 
inline으로 강제하는 것이 아니라 compiler가 판단하기에 괜찮을 때만 inline으로 작동
굳이 쓰지 않는 것을 추천?
*/
#include <iostream>
using namespace std;

inline int min(int x, int y)
{
    return x > y ? y : x;
}

int main()
{
    cout << min(5, 6) << endl;
    cout << min(3, 2) << endl;

    cout << (5 > 6 ? 6 : 5) << endl;
    cout << (3 > 2 ? 2 : 3) << endl;
}