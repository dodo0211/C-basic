#include <stdio.h>

// 매개변수 및 반환 자료형이 있는 함수 포인터

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main() {
    // fp가 add 함수를 가르키도록 함
    int(*fp)(int, int) = add;
    printf("%d \n", fp(10, 3));
    
    // fp가 sub함수를 가르키도록 함
    fp = sub;
    printf("%d \n", fp(10, 3));
}