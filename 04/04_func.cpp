#include <stdio.h>

// 전역변수
int itemCnt = 0;
int money = 100;
int result;

int buyItem(int cost, int cnt) { // 함수 타입이 void라면 return뒤에 아무것도 적지 말고, 함수 타입에 따라 return뒤에 적절한 값을 넣어준다
    // Buy
    if (money < cost) {
        printf("잔액이 부족합니다\n");
        return -1;
    }
    itemCnt+= cnt;
    money -= cost;
    printf("아이템 구매\n");
    printf("  아이템 개수: %d\n", itemCnt);
    printf("  잔액: %d\n", money);
    return 0;
       
}

int main() {
    int a; // 지역변수

    result = buyItem(700, 5);

    buyItem(30, 7);
}