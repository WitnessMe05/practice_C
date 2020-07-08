#include <iostream>
using namespace std;

class Calc
{
private:
    int m_value;

public:
    Calc(int init_value)
        : m_value(init_value)
    {}

    Calc& add(int value) { m_value += value; return *this;}
    Calc& sub(int value) { m_value -= value; return *this;}
    Calc& mult(int value) { m_value *= value; return *this;}
    
    void print()
    {
        cout << m_value << endl;
    }
};

int main()
{
    Calc cal(10);
    cal.add(10).sub(1).mult(2).print();
    cout << endl;

    Calc sam(10);
    sam.add(10);
    sam.sub(1);
    sam.mult(2);
    sam.print();

    
    return 0;
}