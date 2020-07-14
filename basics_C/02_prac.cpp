#include <stdio.h>

int main() {
    /* int g;
    scanf("%d", &g);

    if (g > 100 || g < 0) {
        printf("Wrong score\n");
    }
    else {
        if (g >= 90) {
        printf("Grade is A\n");
        }
        else if (g >= 80) {
            printf("Grade is B\n");
        }
        else if (g >= 70) {
            printf("Grade is C\n");
        }
        else if (g >= 60) {
            printf("Grade is D\n");
        }
        else if (g >= 50) {
            printf("Grade is E\n");
        }
        else {
            printf("Grade is F\n");
        }
    } */
    
    /* int n;
    printf("자연수 입력: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            printf("%d, ", i);
    }
    printf("\n"); */

    /* int n;
    printf("자연수 입력: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int k = i % 10;
        if (k == 3 || k == 6 || k == 9)
            printf("* ");
        else
            printf("%d ", i);
    }
    printf("\n"); */

    /* int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++)
            printf("%d ", 2*j - 1);
        printf("\n");
    } */

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("%d ", j);
        printf("\n");
    }
}