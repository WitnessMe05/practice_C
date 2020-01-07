#include <iostream>

using namespace std;

void printArray(const int array[], const int length)
{
    for (int index = 0; index < length; ++index)
        cout << array[index] << " ";
    cout << endl;
}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    // Selection Sort
    const int length = 5;
    int array[length] = { 3, 5, 2, 1, 4};
    
    printArray(array, length);
    for (int startIndex = 0; startIndex < length - 1; ++startIndex)
    {   
        int min_idx = startIndex;

        for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
        {
            if (array[min_idx] > array[currentIndex])
            {
                min_idx = currentIndex;

            }
        }
        // swap two values in the array
        // std::swap(array[min_idx], array[startIndex]);
        int tmp = array[min_idx];
        array[min_idx] = array[startIndex];
        array[startIndex] = tmp;

        printArray(array, length);
    }
    cout << "End of Selection Sort" << endl;

    // Bubble Sort
    int l = 5;
    int arr[] = { 3, 5, 2, 1, 4};

    printArray(arr, l);
    for (int idx = l-1; idx > 0; --idx)
    {
        for (int j = 0; j < idx; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
            printArray(arr, l);
        }
    }
    cout << "End of Bubble Sort" << endl;
}


