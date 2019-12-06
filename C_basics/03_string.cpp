#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "Hello!";
    char str1[100];

    //scanf("%s", str);

    int len;
    len = strlen(str); // string의 길이를 반환
    printf("문자열의 길이: %d\n", len);
    strcpy(str1, str); // 문자열 복사
    printf("str1의 값: %s\n", str1);


    char sst[100] = "Hello ";
    strcat(sst, "World!"); // 문자열 붙이기
    printf("%s\n", sst);


    char st[] = "simple";
    char stst[] = "simple";

    int cmp = strcmp(stst, st); // st가 사전수보다 stst 앞에오면 -1, 같으면 0, 뒤에오면 1
    printf("%d\n", cmp);
}