/**
 * 2021.06.29 
 */
#include <stdio.h>

int main(void) {
    int a, b;
    printf("\"숫자 2개를 입력하세요\" >>");
    scanf("%d %d", &a, &b);

    // 관계 연산자를 통해  참인지 거짓인지 알아보는
    printf("%d \n\n", a > b);

    printf("%d + %d = %d \n", a, b, a + b);
    printf("%d - %d = %d \n", a, b, a - b);
    printf("%d * %d = %d \n", a, b, a * b);
    printf("%d / %d = %d \n", a, b, a / b);
    printf("%d %% %d =%d \n", a, b, a % b);

    return 0;
}