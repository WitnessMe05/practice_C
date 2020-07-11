#include <iostream>
#include <bitset>

using namespace std;
int main()
{
    const unsigned char opt0 = 1 << 0;
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;
    const unsigned char opt3 = 1 << 3;
    const unsigned char opt4 = 1 << 4;
    const unsigned char opt5 = 1 << 5;
    const unsigned char opt6 = 1 << 6;
    const unsigned char opt7 = 1 << 7;
    cout << bitset<8>(opt0) << endl;
    cout << bitset<8>(opt1) << endl;
    cout << bitset<8>(opt2) << endl;
    cout << bitset<8>(opt3) << endl;
    cout << bitset<8>(opt4) << endl;
    cout << bitset<8>(opt5) << endl;
    cout << bitset<8>(opt6) << endl;
    cout << bitset<8>(opt7) << endl;


    unsigned char items_flag = 0;
    std::cout << "No item    " << std::bitset<8>(items_flag) << std::endl;

    // item0 on
    items_flag |= opt0;
    cout << "Item0 get  " << bitset<8>(items_flag) << endl;
    
    // item3 on
    items_flag |= opt3;
    cout << "Item3 get  " << bitset<8>(items_flag) << endl;

    // item3 off
    items_flag &= ~opt3;
    cout << "Item3 lost " << bitset<8>(items_flag) << endl;

    // item1 check
    if (items_flag & opt1)
        cout << "Has item1" << endl;
    else
        cout << "Not have item1" << endl;
    
    // item0 check
    if (items_flag & opt0)
        cout << "Has item0" << endl;
    else
        cout << "Not have item0" << endl;

    // obtain item 2, 3
    items_flag |= (opt2 | opt3);
    cout << "Item2, 3 get  " << bitset<8>(items_flag) << endl;

    if( (items_flag & opt2) && !(items_flag & opt1) )
    {
        //items_flag ^= opt2; // 0을 1로 1을 0으로 바꿀땐 XOR
        //items_flag ^= opt1;
        items_flag ^= (opt1 | opt2); // 위의 2줄 한줄로 
    }
    cout << bitset<8>(items_flag) << endl;
}