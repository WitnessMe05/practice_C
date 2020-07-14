#include <stdio.h>

int main() {
    // while
    /* int i = 1;

    while (i <= 10) {
        printf("%d\n", i);
        i++;
    } */
    
    // do-while
    /* int i = 18;

    do {
        printf("%d\n", i);
        i++;
    }
    while (i <= 10); */

    // 무한반복
    /* int i = 1;

    while (true) {
        printf("%d",i);
    } */

    int n;
    do {
        printf("0입력 ");
        scanf("%d", &n);
    } while (n != 0);
    printf("0 입력됨\n");
}