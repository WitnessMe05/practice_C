#include <iostream>
#include <ostream>
using namespace std;

class Digit
{
private:
    int m_digit;
public:
    Digit(int digit = 0) : m_digit(digit) {}

    // prefix
    Digit & operator ++ ()
    {
        ++m_digit;
        return *this;
    }   

    // post에서는 parameter에 dummy
    Digit operator ++ (int)
    {
        Digit tmp(m_digit);
        ++(*this);
        // ++m_digit;
        return tmp;
    }

    friend ostream & operator << (ostream &out, const Digit &d)
    {
        out << d.m_digit;
        return out;
    }
};

int main()
{
    Digit d(6);
    cout << ++d << endl;
    cout << d << endl;

    cout << d++ << endl;
    cout << d << endl;
}