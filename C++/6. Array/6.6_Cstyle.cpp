#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char source[] = "Copy this!";
    char dest[50]; // = "Hello";
    strcpy(dest, source); // dest에 source를 복사

    cout << source << endl;
    cout << dest << endl;


    cout << strcat(dest, source) << endl;
    cout << strcmp(source, dest) << endl;
}