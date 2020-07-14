#include <stdio.h>

int main() {

    /* int i;
    for (i = 1; i<=10; i++) {
        printf("%d\n", i);    
    } */

    /* int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i *= 2) { // int를 for 조건 안에서 선언하면, for문 안에서만 유효함
        printf("%d\n",i);
    } */

    /* int n;
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("%d\n", sum); */

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("*");
    }
    printf("\n");
}