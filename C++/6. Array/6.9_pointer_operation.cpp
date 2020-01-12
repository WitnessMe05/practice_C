#include <iostream>

using namespace std;

int main()
{
    int value = 7;
    int *ptr = &value;

    cout << uintptr_t(ptr - 1) << endl;
    cout << uintptr_t(ptr) << endl; // 전에 long long 으로 캐스팅하던 것 대체 
    cout << uintptr_t(ptr + 1) << endl;
    cout << uintptr_t(ptr + 2) << endl; // int가 4byte이므로 4씩 증가
    printf("\n");

    double d = 7;
    double *ptr_d = &d;

    cout << uintptr_t(ptr_d - 1) << endl;
    cout << uintptr_t(ptr_d) << endl; 
    cout << uintptr_t(ptr_d + 1) << endl;
    cout << uintptr_t(ptr_d + 2) << endl; // double이 8byte이므로 8씩 증가
    printf("\n");   

    long long arr[]{9, 7, 5, 3, 1};
    long long *ptr_a = arr;
    
    for (int i = 0; i < 5; ++i)
    {
        //cout << arr[i] << " " << uintptr_t(&arr[i]) << endl; // array의 메모리는 인접해있다
        cout << *(ptr_a + i) << " " << uintptr_t(ptr_a + i) << endl;
    }
    printf("\n");   
    
    char name[] = "Jack jack";
    const int n_name = sizeof(name) / sizeof(char);
    char *ptr_c = name;

    for (int i = 0; i < n_name; ++i)
    {
        cout << *(name + i);
        cout << *(ptr_c + i);
    }
}