#include <stdio.h>

int main() {
    int choice;

    makeChoice:
    printf("새 게임 : 1\n");
    printf("불러오기 : 2\n");
    printf("설정 : 3\n");
    printf("크레딧 : 4\n");

    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("새 게임 시작\n");
        break;
    
    case 2:
        printf("게임을 불러옵니다\n");
        break;
    case 3:
        printf("설정\n");
        break;
    case 4:
        printf("크레딧..\n");
        break;
    default:
        printf("올바른 숫자를 입력하시오\n");
        goto makeChoice;
    }


    /* if (choice == 1) {
        printf("새 게임 시작\n");
    }
    else if (choice == 2) {
        printf("게임을 불러옵니다\n");
    }
    else if (choice == 3) {
        printf("설정\n");
    }
    else if (choice == 4) {
        printf("크레딧..\n");
    }
    else {
        printf("올바른 숫자를 입력하시오\n");
    } */
}