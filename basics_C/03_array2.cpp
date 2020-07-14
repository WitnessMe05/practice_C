#include <stdio.h>

int main() {
    /* // 입력받은 숫자를 거꾸로 출력
    int n;
    int arr[1000];

    printf("입려할 숫자 개수 입력: ");
    scanf("%d", &n);
    for (int i=0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int j=n-1; j>=0; j--)
        printf("%d ", arr[j]);
    printf("\n"); */

    /* //배열 안의 최대 최소값 구하기
    int n;
    int arr[100];
    
    printf("배열의 크기 입력: ");
    scanf("%d", &n);
    for (int i=0; i < n; i++)
        scanf("%d", &arr[i]);
    
    int max = arr[0];
    for (int i = 1; i < n; i++) 
        if (max < arr[i]) max = arr[i];
    printf("최댓값: %d\n", max);

    int min = arr[0];
    for (int i = 0; i < n; i++)
        if (min > arr[i]) min = arr[i];
    printf("최솟값: %d\n", min); */

    // 짝수의 개수 구하기
    int n;
    int arr[100];

    printf("배열의 크기 입력: ");
    scanf("%d", &n);
    for (int i=0; i < n; i++)
        scanf("%d", &arr[i]);

    int cnt;
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 0) cnt++;
    printf("%d\n", cnt);
    
}