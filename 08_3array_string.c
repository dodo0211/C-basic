#include <stdio.h>

int main() {
    char a[20];
    printf("10자 이하의 문자열을 입력하시오 >>");
    scanf("%s", &a);
    printf("%s \n", a);

    printf("\n\n\n\n\n");

    // 배열 b의 인덱스4 자리를 ^로 바꿈
    char b[20] = "Hello World";
    b[4] = '^';
    printf("%s \n", b);
}