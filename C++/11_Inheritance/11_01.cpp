#include <iostream>

class Mother
{
private:
    int m_i;

public:
    Mother(const int& i_in)
        : m_i(i_in)
    {}
    int getValue()
    {
        return m_i;
    }
    
    void setValue(const int& i)
    {
        m_i = i;
    }
};

class Child : public Mother             // derived class
{
private:
    double m_d;

public:
    Child(const int & i_in, const double & d_in)
        : Mother(i_in), m_d(d_in)
    {}


    void setValue(const double& d_in)
    {
        m_d = d_in;
    }

    double getValue()
    {
        return m_d;
    }
};


int main()
{
    //Mother mother(1024);
    //#mother.setValue(1024);
    //std::cout << mother.getValue() << std::endl;

    Child child(1024, 128.5);
    //child.setValue(512);
    std::cout << child.Mother::getValue() << std::endl;
    std::cout << child.getValue() << std::endl;
}