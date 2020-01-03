#include <iostream>
#include <string>

using namespace std; // 2 + 4 + 8 = 14

struct Employee
{
    short   id;    // 2 bytes
    int     age;   // 4 bytes
    double  wage;  // 8 bytes
};

int main()
{
    Employee emp1;

    cout << sizeof(Employee) << endl;

    
}