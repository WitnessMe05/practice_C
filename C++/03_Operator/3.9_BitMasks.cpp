#include <iostream>
#include <bitset>

int main()
{
    using namespace std;

    const unsigned int red_mask = 0xFF0000;
    const unsigned int green_mask = 0x00FF00;
    const unsigned int blue_mask = 0x0000FF;    

    unsigned int pixel_color = 0xDAA520;

    cout << bitset<32>(pixel_color) << endl;
    
    unsigned char blue;
    unsigned char green;
    unsigned char red;


    blue = pixel_color & blue_mask;
    cout << "blue " << bitset<8>(blue) << " " << int(blue) << endl;

    green = (pixel_color & green_mask) >> 8;
    cout << "green " << bitset<8>(green) << " " << int(green) << endl;

    red = (pixel_color & red_mask) >> 16;
    cout << "red " << bitset<8>(red) << " " << int(red) << endl;


}