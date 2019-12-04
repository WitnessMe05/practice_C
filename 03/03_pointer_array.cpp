// 배열포인터 : 배열을 가리키는 포인터
// 포인터배열 : 포인터들이 배열되어 있는 것

#include <stdio.h>

int main() {
    /* int a = 10;
    int b = 20;
    int c = 30;
    int d = 40;
    int *ptr[4]; // 배열포인터는 int (*ptr)[4];

    ptr[0] = &a;
    ptr[1] = &c;
    ptr[2] = &d;
    ptr[3] = &b;

    printf("%d %d %d %d\n", *ptr[0], *ptr[1], *ptr[2], *ptr[3]); */

    /* int arr[4] = {1,2,3,4};
    int *ptr[4];

    for (int i = 0; i < 4; i++)
        ptr[i] = &arr[i]; // 포인터 배열에 배열의 주소값 삽입
    
    for (int i = 0; i < 4; i++)
        printf("%d ", *ptr[i]); // 포인터 배열의 주소에 저장된 값 출력
    printf("\n"); */

    char str[] = "Hello";

    printf("%s\n", &str[0]); // 배열의 0번째 주소를 알려주면, null문자가 나올때 까지 모든 문자들을 출력한다 == printf("%s\n", str);

    char strings[3][10] = {"Hello", "World", "Doodle"};
    char *p_str[3];

    for (int i = 0; i < 3; i++)
        p_str[i] = strings[i];

    for (int i = 0; i < 3; i++)
        printf("%s\n", strings[i]);

    for (int i = 0; i < 3; i++)
        printf("%s\n", p_str[i]);
}