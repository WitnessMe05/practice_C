#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Date
{
private:
    int _month;
    int _day;
    int _year;

public: 
    void setDate(const int& month_input, const int& day_input, const int& year_input)
    {
        _month = month_input;
        _day   = day_input;
        _year  = year_input;
    }

public:
    const int getDay()
    {
        return _day;
    }

    void copyFrom(const Date& original)
    {
        _month = original._month;
        _day   = original._day;
        _year  = original._year;
    }
};

int main()
{
    Date today;
    today.setDate(8, 4, 2025);
    cout << today.getDay() << endl;

    Date copy;
    copy.copyFrom(today);
    cout << copy.getDay() << endl;
    return 0;   
}