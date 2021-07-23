#include <stdio.h>

// 매개변수 및 반환 자료형이 없는 함수 포인터

void myFunction() {
    printf("It's my function \n");
}

void yourFuction() {
    printf("It's your function \n");
}

// 형태가 비슷한 함수들을 같은 명령어로 불러올 수 있음
int main() {
    // fp가 myFunction을 가르키도록 함
    void(*fp)() = myFunction;
    fp();

    // fp가 yourFunction을 가르키도록 함
    fp = yourFuction;
    fp();
}