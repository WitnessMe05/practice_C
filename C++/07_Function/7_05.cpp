#include <iostream>
using namespace std;

int getValue(int x)
{
    int value = x * 2;
    return value;
}

int* getValue2(int x)
{
    int value = x * 2;
    return &value;
}

int* allocateMemory(int size)
{
    return new int[size];
}

int main()
{
    int value  = getValue(3);
    int value2 = *getValue2(3); // getValue2 안에서 사라질 변수의 주소를 받는건 위험해 

    int *array = allocateMemory(1024);
    return 0;
}