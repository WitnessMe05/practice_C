#include <iostream>

using namespace std;

int main()
{
    cout << "break in while" << endl;
    int count = 0;
    while (1)
    {
        cout << count << endl;
        if (count == 10) break;
        ++count;
    }

    cout << "\nberak in for" << endl;
    for (int i = 0; i < 10; ++i)
    {
        cout << i << endl;
        if (i == 5) break;
    }

    cout << "\ncontinue" << endl;
    for (int i = 0; i < 10; ++i)
    {
        if (i % 2 == 0) continue;

        cout << i << endl;
    }

    cout << "\ncontinue in do-while" << endl;
    int c(0);
    do
    {
        if (c == 5) continue;

        cout << c << endl;

    } while (++c < 10); // 증감을 do안에 넣으면 continue로 인해 증가 안할 수 있어
    
}