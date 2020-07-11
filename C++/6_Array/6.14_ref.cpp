#include <iostream>

struct Something
{
    int v1;
    float v2;
};

struct Other
{
    Something st;
};

int main()
{
    Other ot;
    ot.st.v1 = 3;
    // or
    int &v1 = ot.st.v1;
    v1 = 1;

    int value = 5;
    int *const ptr = &value;
    int &ref = value;

    *ptr = 10;
    ref = 10; // 둘이 같은거야
}