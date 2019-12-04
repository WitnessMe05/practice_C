// 산술연산자: 수학 연산
// + - * / % =
// += -= *= /= %=
// ++ --

#include <stdio.h>

/* int main() {

    int a = 5;
    printf("a는 원래 %d였다...\n", a);
    a = a + 3; // =: 대입 연산
    printf("changed a: %d\n", a); 

    int a = 10;
    printf("original a: %d\n", a);
    a++; // a = a + 1
    printf("next a: %d\n", a);
         // a += 1 세 가지가 같은 표현
    a--; // a = a - 1
    printf("next a: %d\n", a); 

    int a = 10;
    int b;

    printf(" == 전치 증가 연산 ==\n");
    b = ++a; // 먼저 1이 증가 되고 b에 대입한다
    printf("a: %d\n",a);
    printf("b: %d\n",b);

    printf("== 후치 증가 연산 ==\n");
    int c = 10;
    int d;
    d = c++; // 대입이 먼저 되고 d에 대입
    printf("a: %d\n",c);
    printf("b: %d\n",d);
} */

// 비교연산자, 논리연산자

int main() {
    /* int a,b;
    scanf("%d%d", &a, &b);

    int p = a > b;
    int q = a < b;
    int r = a == b;
    // True: 1, False: 0
    // bool 자료형 사용할 수 있어 

    printf("%d\n", p);
    printf("%d\n", q);
    printf("%d\n", r); */

    // 논리연산자
    // &&: and, ||: or, !: not

    int a;
    scanf("%d", &a);

    bool p = a >= 1 && a <= 10;
    bool q = a == 3 || a == 7;
    bool r = !q;

    printf("%d\n", p);
    printf("%d\n", q);
    printf("%d\n", r);
}