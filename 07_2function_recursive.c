#include <stdio.h>

int factorial(int);

int main() {
    int n;
    printf("n 팩토리얼을 계산한다. >>");
    scanf("%d", &n);
    printf("%d \n", factorial(n));
}

// 4! = 4*3*2*1 = 24
int factorial(int a) {
    // 무한반복문을 막는 제어문
    if(a == 1) return 1;
    else return a * factorial(a - 1);
}