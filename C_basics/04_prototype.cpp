#include <stdio.h>

// 걷기
void walk(int);

// 돌기
void rotate(int);

void drawSquare(); 

int main() {
    drawSquare();
} 


// 걷기
void walk(int distance) {
    printf("%dcm를 걸었습니다\n", distance);
}

// 돌기
void rotate(int angle) {
    printf("%d도 회전했습니다.\n", angle);
}

void drawSquare() {
    for (int i = 1; i <= 4; i++) {
        walk(10);
        rotate(90);
    }
}
