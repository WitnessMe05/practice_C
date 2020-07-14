/* 
    1. ptr == &ptr[0]
    2. *ptr == ptr[0]
    3. ptr + 1 == ptr에 sizeof(ptr)을 더한 값
 */

#include <stdio.h>

int main() {
    /* int arr[3] = {1, 2, 3};
    printf("arr = %p\n", arr);
    printf("arr + 1 = %p\n", arr + 1);

    printf("&arr = %p\n", &arr);
    printf("&arr + 1 = %p\n", &arr + 1);

    printf("%ld\n", sizeof(arr));
    printf("%ld\n", 0x7fffc15f79b8-0x7fffc15f79b0); */

    int arr[3] = {1,2,3};
    int (*ptr_arr)[3]; // 길이가 3인 int형 배열을 가리키는 포인터를 선언
    ptr_arr = &arr;

    for (int i = 0; i < 3; i++)
        printf("%d\n", (*ptr_arr)[i]);
}