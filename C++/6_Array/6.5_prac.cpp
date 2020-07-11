// matrix multiplication

#include <iostream>

using namespace std;

// void matrixMultiple(int arr1, int arr2)
// {

// }

int main()
{
    int arr1[2][2]
    {
        {1, 2},
        {3, 4}
    };
    int arr2[2][2]
    {
        {3, 4},
        {5, 6}
    };
    int result_arr[2][2]{0};

    for (int row = 0; row < 2; ++row)
    {
        for (int col = 0; col < 2; ++col)
        {
            for (int i = 0; i < 2; ++i)
            {
                result_arr[row][col] += arr1[row][i] * arr2[i][col];
            }
        }
    }
    for (int row = 0; row < 2; ++row)
    {
        for (int col = 0; col < 2; ++col)
            cout << result_arr[row][col] << "\t";
        cout << endl;
    }
    
}