/* 
    1. arr == &arr[0]
    2. *arr == arr[0]
    3. arr + 1 == arr에 sizeof(arr)을 더한 값
 */

#include <stdio.h>

int main() {
    int arr[2][3] = { {1,2,3}, {4,5,6}};

    printf("%d\n", sizeof(arr));
    printf("%d\n", sizeof(arr[0]));
    printf("%d\n", sizeof(arr[0][0]));

    int (*ptr)[3] = arr;

    for (int i = 0; i < 2; i++) {
        for (int j=0; j < 3; j++)
            printf("%d ", ptr[i][j]);
        printf("\n");
    }

    // 1. ptr[i] == arr[i]
    // 2. ptr[i][j] == arr[i][j]
    // 3. ptr == arr
    // 2차원 배열을 포인터로 전환하려면 하나의 행을 담을 수 있는 포인터를 만들고 배열을 담으면 된다

    for (int(*row)[3] = arr; row < arr + 2; row++) {
        for (int *col = *row; col < *row + 3; col++)
            printf("%d ", *col);
        printf("\n");
    }
}