#include <stdio.h>

int main() {
    // 포인터는 연산을 통해 자료형의 크기만큼 이동한다.
    //  -> 따라서 정수(int)형 포인터는 4바이트씩 이동한다.

    // a 자체가 배열의 시작 주소를 의미
    // a  자체가 배열의 시작을 가르키는 포인터 
    int a[5] = {1, 2, 3, 4, 5};
    int i;
    for(i=0;i<5;i++) {
        // 배열의 첫번째 원소의 주솟값인 a에 i를 더한 값이 차례대로 출력
        printf("%d ", a+i);

        // 해당 주솟값의 값을 출력
        // 포인터를 배열처럼 사용
        printf("%d ", *(a+i));
        printf("%d ", a[i]);
    }
}