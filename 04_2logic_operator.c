/**
 * 2021.06.29 
 */
#include <stdio.h>

int main(void) {
    int a, b, c;

    printf("세 개의 숫자를 입력하시오 >>");
    scanf("%d %d %d", &a, &b, &c);

    printf("%d \n", !a);
    printf("%d \n", a && b);
    printf("%d \n", (a > b)&(b >c ));

    return 0;
}