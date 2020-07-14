#include <iostream>
using namespace std;

class Mother
{
private:
    int m_i;

public:
    Mother(const int & i_in = 0)
        : m_i(i_in)
    {
        cout << "Mother construction" << endl;
    }
};

class Child : public Mother
{
private:
    double m_d;

public:
    Child(const double & d_in)
        : Mother(1024), m_d(d_in)
    {
        cout << "Child construction" << endl;
    }
};

int main()
{
    Child c1(12);    

    return 0;
}