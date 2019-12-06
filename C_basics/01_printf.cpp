#include <stdio.h>

int main() {
    /* //정수는 d
    printf("%d + %d = %d\n", 2, 3, 5);

    //실수는 f: float
    printf("%f\n", 3.14);
    printf("%.2f\n", 3.141592); // 소수점 둘째자리까지 반올림하여 출력

    printf("%g\n", 3.141592);
    printf("%.3g\n", 64181684.1681684164);

    // c: character
    printf("%c %c %c\n", 'a','b','c');
    printf("%s\n", "안녕하세요!"); // s: string, 문자열은 무조건 " " 큰따옴표로! */

    // sizeof는 해당 변수의 크기를 반환
    printf("%d %d %d %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double));

    int a; char b; float c; double d;
    printf("%d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
}