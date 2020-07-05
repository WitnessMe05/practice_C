#include <iostream>
using namespace std;

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    Fraction(const int& num_in = 1, const int& den_in = 1) // 기본값넣기 --> 오버로딩처럼 기본값 설정가능
    {
        m_numerator = num_in;
        m_denominator = den_in;
        cout << "Fraction Construct" << endl;
    }
    
    void print()
    {
        cout << m_numerator << " / " << m_denominator << endl;
    }
};

class Second
{
public:
    Second()
    {
        cout << "class Second constructor()" << endl;
    }
};
class Fisrt
{
public:
    Second sec;

    Fisrt()
    {
        cout << "class First constructor()" << endl;
    }
};


int main()
{
    // Fraction frac; // parameter가 한개도 없으면 괄호를 빼야해
    // frac.print();

    // Fraction one_third(1, 3);
    // one_third.print();

    // Fraction two {1, 3};
    // two.print();

    Fisrt fir;

    return 0;

}