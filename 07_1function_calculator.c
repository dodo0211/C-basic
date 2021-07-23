#include <stdio.h>

// 함수의 선언
void calculator(int, int);

// 메인함수가 프로그램의 시작
int main() {
    calculator(10, 3);
    calculator(15, 2);
    calculator(18, 4);
    return 0;
}

// 함수의 정의
void calculator (int a, int b){
    printf("%d + %d = %d \n", a, b, a+b);
    printf("%d - %d = %d \n", a, b, a-b);
    printf("%d * %d = %d \n", a, b, a*b);
    printf("%d / %d = %d \n", a, b, a/b);
    printf("\n");
}