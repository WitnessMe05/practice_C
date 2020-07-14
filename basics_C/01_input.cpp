#include <stdio.h>

int main() {
    //float a, b;

    // 입력을 받는 함수, python의 input
   /*  printf("실수를 입력하시오: ");
    scanf("%f%f", &a, &b); // &: 포인터

    float hap = a + b;
    float cha = a - b;
    float gop = a * b;
    float mok = a / b;

    printf("%f + %f = %f\n", a, b, hap);
    printf("%f - %f = %f\n", a, b, cha);
    printf("%f * %f = %f\n", a, b, gop);
    printf("%f / %f = %f\n", a, b, mok);

    printf("%f + %f = %f\n", a, b, a+b);
    printf("%f - %f = %f\n", a, b, a-b);
    printf("%f * %f = %f\n", a, b, a*b);
    printf("%f / %f = %f\n", a, b, a/b); */
    
    int a;

    printf("숫자 입력: ");
    scanf("%d", &a);
    printf("%d의 ASCII 문자: %c\n", a, a);
}