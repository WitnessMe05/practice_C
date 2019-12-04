// call-by-value --> 값만 넘겨주기 때문에 아래 main에서 swap써도 안바꼈어
// call-by-reference --> 포인터를 사용해서 변수 자체를 넘겨준다

#include <stdio.h>

/* void swap(int *x, int *y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
    //printf("x = %d, y = %d\n", x, y);
}

int main() {
    int a,b;
    scanf("%d%d", &a, &b);

    swap(&a, &b);

    printf("a = %d, b = %d\n", a, b);
} */

void swap(int &x, int &y) { // reference variable
    int tmp = x;
    x = y;
    y = tmp;
}

int main() {
    int a,b;
    scanf("%d%d", &a, &b);

    swap(a, b);

    printf("a = %d, b = %d\n", a, b);
}