#include <iostream>
#include <assert.h>
using namespace std;

class IntList
{
private:
    int m_list[10] = {1,2,3,4,5,6,7,8,9,10};
public:
    // void setItem(int index, int value)
    // {
    //     m_list[index] = value;
    // }
    
    // int getItem(int index)
    // {
    //     return m_list[index];
    // }

    // int *getList()
    // {
    //     return m_list;
    // }
    int & operator [] (const int index)
    {
        assert(index >= 0);
        assert(index < 10);
        
        return m_list[index];
    }
 
    const int & operator [] (const int index) const // const만 가지고도 overloading 된다
    {
        assert(index >= 0);
        assert(index < 10);
        
        return m_list[index];
    }
};


int main()
{
    IntList my_list;
    // my_list.setItem(3, 1);
    // cout << my_list.getItem(3) << endl;
    // my_list.getList()[3] = 10;
    // cout << my_list.getList()[3] << endl;

    my_list[3] = 5;
    cout << my_list[3] << endl;

    const IntList const_list;
    cout << const_list[3] << endl;
    // cout << const_list[20] << endl;  // assert로 걸러낼 수 있어
    return 0;
}