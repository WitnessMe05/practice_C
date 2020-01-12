#include <iostream>

int main()
{   
    using namespace std;

    char name[] = "Jack jack";
    const int n_name = sizeof(name) / sizeof(char);

    char *ptr = name;

    while (*ptr != '\0')
    {
        cout << *ptr;
        ++ptr;
    }
}