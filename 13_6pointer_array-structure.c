#include <stdio.h>

int main() {
    int a[5] = {1, 2, 3, 4, 5};

    // 포인터를 이용해서 a배열의 주솟값을 넣도록 함
    // 현재 p는 첫번째 원소를 가르키고 있는 상태에서 출력이 이루어짐 
    int *p = a;

    // output 1
    printf("%d \n", *(p++));
    // output 3
    printf("%d \n", *(++p));
    // output 5
    printf("%d \n", *(p + 2));
}