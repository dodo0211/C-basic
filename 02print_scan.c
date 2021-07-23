/**
 * 2021.06.27
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("숫자를 입력하시오 >>");
    scanf("%1d%1d%1d", &a, &b, &c);
    printf("입력한 숫자의 값은 %d, %d, %d 이다.  \n", a, b, c);
    
    return 0;
}