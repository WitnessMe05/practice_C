#include <iostream>

namespace a
{
    int my_var(10);
    int count(13212312);
}

namespace b
{
    int my_var(20);
}

namespace c
{
    int my_var(30);
}

int main()
{
    using namespace std;
    cout << "Hello " << std::endl;

    cout << a::my_var << endl;
    cout << b::my_var << endl;

    {
        using namespace a;
        cout << a::count << endl; // std에도 count 있어서 겹쳐 (using의 모호성)
    }
}