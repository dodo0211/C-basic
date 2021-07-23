#include <stdio.h>

// 함수 포인터 자체를 반환하여 사용

int add(int a, int b) {
    return a + b;
}

// 함수 포인터 자체의 매개변수가 있고, 이 함수 포인터가 add라는 함수 포인터를 반환하도록 작성
// (int, int)는 add의 매개변수
int(*process(char* a))(int, int) {
    printf("%s \n", a);

    return add;
}

int main() {
    // 매개변수를 여러 개 사용해서 작성할 수 있다.
    printf("%d \n", process("10과 20을 더해보겠습니다.")(10, 20));
}