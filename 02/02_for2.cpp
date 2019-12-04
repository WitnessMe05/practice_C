#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    /* int i=0, t=1;
    while (i <= n) {
        printf("2^%d = %d\n", i, t);
        i++;
        t *= 2;
    } */

    /* for (int i = 0, t = 1; i <= n; i++, t *= 2) {
        printf("2^%d = %d\n", i, t);
    } */
    for (int j = 1; j <= n; j++) {
        for (int i = 1; i <= j; i++) {
            printf("*");
        }
        printf("\n");
    }
}