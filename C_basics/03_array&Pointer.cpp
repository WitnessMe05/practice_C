#include <stdio.h>

int main() {
    // int a = 10;
    // int *ptr_a = &a;

    // printf("ptr_a의 값: %p\n", ptr_a);
    // printf("ptr_a + 1의 값: %p\n", ptr_a + 1); // +1을 했지만 int는 4바이트이므로 4가 더해진다

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};

    // printf("arr의 값: %p\n", arr); // arr의 포인터 주소는 arr의 첫번째 요소 주소값과 같다 (&arr[0])
    // for (int i = 0; i<10; i++) {
    //     printf("&arr[%d] = %p\n", i, &arr[i]);
    //     printf("arr + %d = %p\n", i, arr + i);
    //     printf("\n");
    // }

    for (int i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    printf("\n");

    for (int i = 0; i < 10; i++)
        printf("%d ", *(arr + i));
    printf("\n");

    for (int *ptr = arr; ptr < arr + 10; ptr++)
        printf("%d ", *ptr);
    printf("\n");

}