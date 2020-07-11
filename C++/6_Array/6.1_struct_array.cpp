#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int width;
};

int main()
{

    cout << sizeof(Rectangle) << endl;

    Rectangle rect_arr[10];

    cout << sizeof(rect_arr) << endl;

    rect_arr[0].length = 1;
    rect_arr[0].width = 2;
    
    return 0;
}