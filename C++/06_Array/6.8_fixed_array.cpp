#include <iostream>

using namespace std;
//void printArray(int *array)
void printArray(int array[]) // 아래랑 똑같은거임
    
{
    //cout << sizeof(array) << endl;
    cout << *array << endl;
}

struct MyStruct
{
    int array[5]{5, 7, 3, 2, 9};
};

void doSomethin(MyStruct *ms)
{
    cout << sizeof((*ms).array) << endl;
}

int main()
{
    

    int array[5]{9, 7, 5, 3, 1};
    cout << array[0] << " " << array[1] << endl;
    cout << array << endl; // array변수는 사실 pointer 였다! -- 첫번째 메모리의 주소와 같음
    cout << &array[0] << endl;

    cout << *array << endl;

    int *ptr = array;
    cout << ptr << endl;
    cout << *ptr << " " << *(ptr + 1) << endl;
    
    // char name[] = "jackjack";
    // cout << *name << endl;

    cout << sizeof(array) << endl; // array 전체의 메모리
    cout << sizeof(ptr) << endl;   // 포인터 변수의 사이즈 (주소값 8 bytes)
    printArray(array); // parameter로 들어올 때 포인터로 들어와서 8바이트
    
    MyStruct ms;
    cout << ms.array[0] << endl;
    cout << sizeof(ms.array) << endl; // sturct나 class 안에 array있을때 pointer로 받지않고 array그대로 받음
    doSomethin(&ms);
}