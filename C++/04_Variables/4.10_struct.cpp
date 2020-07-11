#include <iostream>
#include <string>

using namespace std;

struct Person
{
    double height;
    float  weight;
    int    age = 10;
    string name;

    void print()
    {
    cout << height << " " << weight << " " << age << " " << name << endl
    ;
    }
};

struct Family
{
    Person me, mom, dad;
};

Person getMe()
{
    Person me{2.0, 199.0, 20, "Jack Jack"};

    return me;
}

int main()
{
    Person me{2.0, 199.0, 20, "Jack Jack"};
    Person mom(me);
    Person dad;

    me.print();
    mom.print();
    dad = me;
    dad.print();

    Person me_from_func = getMe();
    me_from_func.print();
    
    return 0;
}