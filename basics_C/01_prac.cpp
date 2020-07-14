#include <stdio.h>

int main() {
    
    /* // prac_01 합계산과 출력
    float a, b;
    printf("숫자 두 개를 입력하시오: ");
    scanf("%f%f", &a, &b);

    printf("두 숫자 %f와 %f의 합은: %f입니다.\n", a, b, a+b);
    printf("##########################################\n");
    
    // 체질량 지수 계산
    float wieght, height;
    printf("키(m)를 입력하시오: ");
    scanf("%f", &height);
    printf("몸무게(kg)을 입력하시오: ");
    scanf("%f", &wieght);

    float bmi = wieght / (height * height);
    printf("당신의 BMI지수는 %f입니다\n", bmi);
    printf("##########################################\n"); */

    
    // 알파벳을 입력받고 그 다음 알파벳을 출력하시오 (Z 제외)
    char alpha;
    printf("알파벳을 입력하시오: ");
    scanf("%c", &alpha);

    int nex;
    nex = (int)alpha + 1; // char nex = alpha + 1; 이거만 해도 되네 
    printf("%c의 다음 알파벳은 %c입니다.\n", alpha, nex);
}