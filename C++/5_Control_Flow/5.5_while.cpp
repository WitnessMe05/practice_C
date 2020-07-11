#include <iostream>

using namespace std;

// int main()
// {
//     int count = 0;
//     while (count < 10)
//     {   
//         cout << count << endl;
//         ++count;
//     }
    
// }

int main()
{
    int outer_count = 0;
    while(outer_count <= 5)
    {
        int inner_count = 1;
        while (inner_count <= outer_count)
        {
            cout << inner_count++ << " ";
        }
        cout << endl;
        ++outer_count;
    }
}