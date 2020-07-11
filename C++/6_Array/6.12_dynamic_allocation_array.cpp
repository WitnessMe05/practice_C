#include <iostream>

using namespace std;

int main()
{
    int length;
    cin >> length;

    int *array = new int[length] {11,22,33,44,55, 66};

    array[0] = 1;
    array[1] = 2;

    for (int i = 0; i < length; ++i)
    {
        cout << (uintptr_t)&array[i] << endl;
        cout << array[i] << endl;
    }
    
    delete [] array;

    int fixedArray[] = {1, 2, 3, 4, 5};

    int *array2 = new int[3]{1, 2, 3};

    delete [] array2;
    /*
    resizing?
    더 큰 메모리 할당받아와서 기존 메모리 자료 복사하고 추가할것 덧붙이기
    */

    return 0;
}
