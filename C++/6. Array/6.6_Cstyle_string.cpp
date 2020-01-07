#include <iostream>

using namespace std;

int main()
{
    //char myString[] = "string"; // 문자열 수 + null character (\0)

    // for (int i = 0; i < 7; ++i)
    //     cout << (int)myString[i] << endl;
    // cout << sizeof(myString) / sizeof(myString[0]) << endl;

    char myString[255];
    // cin >> myString;
    // myString[0] = 'A';
    // cout << myString << endl;
    
    //cin >> myString;
    cin.getline(myString, 255);
    cout << myString << endl;
    // myString[7] = '\0';
    // cout << myString << endl;

    int ix = 0;
    while (true)
    {
        if (myString[ix] == '\0') break;

        cout << myString[ix] << " " << (int)myString[ix] << endl;

        ix++;
    }
}