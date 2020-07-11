#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Friend
{
public: // access specifier (public, private, protected 3 가지 있음)
    string name_;
    string m_address;
    int    _age;
    double height;
    double weight;

    void print()
    {
        cout << name_ << " " << m_address << " " << _age << " " << height << " " << weight << endl;
    }
};


int main()
{
    Friend jj{"Jack Jack", "Uptown", 2, 30, 10};
    jj.print();


    vector<Friend> my_friends;
    my_friends.resize(2);

    for(auto &e : my_friends)
        e.print();
}