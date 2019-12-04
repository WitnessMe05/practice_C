#include <stdio.h>

int main() {
    /* int n;
    scanf("%d", &n);

    if (n % 2 == 0) { // == 0이 없으면, if (1) -> if 실행됨 그래서 if가 홀수 else가 짝수됨
        printf("n is even number\n");
    }
    else {
        printf("n is odd number\n");
    }   

    if (n > 0) {
        printf("n은 양수\n");
    }
    else if (n < 0) {
        printf("n은 음수\n");
    }
    else {
        printf("n은 0\n");
    } */

    // 중괄호 코딩 스타일
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        // a > b > c
        // a > c > b
        // c > a > b
        if (a > c) printf("%d\n", a);
        else printf("%d\n", c);        
    }
    else if (b > c) printf("%d\n", b);
    // 코드블럭이 한 문장인 경우 중괄호 뺄 수 있음, 줄바꿈도 필요없음   
    else printf("%d\n", c);   
}
    

