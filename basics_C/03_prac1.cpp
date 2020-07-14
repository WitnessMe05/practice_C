#include <stdio.h>

/* int main() {
    
    // 1. 100개 이하의 정수를 입력받아
    // 첫 줄에 짝수 번째 숫자들을 순서대로 출력하고,
    // 다음 줄에 홀수 번째 숫자들을 출력하도록 하시오
    
    int arr[105]; // 넉넉하게 잡는게 좋아
    int n;
    printf("입력할 숫자의 갯수를 정하시오\n");
    scanf("%d", &n);

    printf("숫자를 입력하시오\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    for (int i = 0; (2*i+1) < n; i++)
        printf("%d ", arr[(2*i+1)]);
    printf("\n");

    for (int i = 0; 2*i < n; i++)
        printf("%d ", arr[(2*i)]);
    printf("\n");
} */

int main() {
    // 10*10 이하의 정수형 이차원 배열을 입력받아
    // 그 배열의 각 행의 요소의 합을 출력

    int n, m;
    int arr[12][12];
    scanf("%d%d",&n, &m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);
    }

    for (int i = 0; i < n; i++){
        int c = 0;
        for (int j = 0; j < m; j++) {
            c += arr[i][j];
        } printf("%d\n", c);
    }
}