#include <iostream>

using namespace std;

int main()
{
    const int num_rows = 3;
    const int num_columns = 5;

    int arr[][num_columns] // num_rows만 생략 가능 
    {
        {1, 2, },             // row 0
        {6, 7, 8, 9, 10},     // row 1
        {11, 12, 13, 14, 15}  // row 2
    };

    int arr0[num_rows][num_columns] { {0} };

    for (int row = 0; row < num_rows; ++row)
    {
        for (int col = 0; col < num_columns; ++col)
            cout << arr0[row][col] << "\t";
        cout << endl;
    }

    int arr3[5][4][3]; // 3차 이상의 다차원 array 가능 
}