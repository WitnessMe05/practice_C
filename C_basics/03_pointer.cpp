// 포인터: 변수의 주소를 저장하는 변수

#include <stdio.h>

int main() {
    // int a = 20;
    // char c = 'h';
    
    // int *ptr_a;
    // char *ptr_c;

    // ptr_a = &a;
    // ptr_c = &c; // &는 주소값을 나타냄

    // printf("a의 값: %d\n", a);
    // printf("a의 주소값: %p\n", &a);
    // printf("ptr_a에 저장된 값: %p\n", ptr_a);
    // printf("ptr_a가 가리키는 변수의 값: %d\n", *ptr_a);

    // int a = 10;
    // int b = 20;
    // int *ptr;

    // ptr = &a;
    // printf("ptr이 가리키는 변수에 저장된 값: %d\n", *ptr);

    // ptr = &b;
    // printf("ptr이 가리키는 변수에 저장된 값: %d\n", *ptr);
    // int a = 10;
    // int *ptr;
    // ptr = &a;

    // printf("a의 값: %d\n", a);
    // *ptr = 20; // a = 20과 같음
    // printf("a의 값: %d\n", a);

    int a = 10;
    int *ptr;
    ptr = &a;

    int **ptr_ptr;
    ptr_ptr = &ptr;

    printf("a = %d\n", a);
    printf("&a = %p\n", &a);
    printf("ptr = %p\n", ptr);
    printf("&ptr = %p\n", &ptr);
    printf("ptr_ptr = %d\n", **ptr_ptr); // 포인터 주소를 출력할땐 %p사용하는데 ptr_ptr은 ptr의 주소이고 그 주소에 저장된 변수는 a와 같기 때문에 10을 출력해야 하므로 %d로 해야함

}