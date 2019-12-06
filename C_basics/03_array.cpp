#include <stdio.h>

int main() {
    /* int a[5]; // 배열 선언 - 대괄호 안에 배열의 크기

    for (int i = 0; i <= 4; i++) 
        a[i] = i * 5;

    for (int j = 0; j <= 4; j++)
        printf("%d\n", a[j]); */

    /* int arr[5] = {3, 1, 4, 1, 5}; // 중괄호로 선언하면 크기설정 안해도 가능 (e.g. arr[])
          
    for (int i = 0; i <=4; i++)
        printf("%d ", arr[i]);
    printf("\n"); */

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 8};

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) // sizeof(arr) / sizeof(int)를 통해 계산하지 않아도 메모리 크기 계산 가능
        printf("%d ", arr[i]);
    printf("\n");
}