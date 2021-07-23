#include <stdio.h>

int main() {
    // 입력 버퍼로 인해 발생하는 오류, 첫번째 값만 입력했는데 프로그램이 종료됨
    // enter와 space등을 아스키 코드값으로 받아들이기 때문
    // int a;
    // char c;
    // scanf("%d", &a);
    // printf("%d \n", a);
    // scanf("%d", &c);
    // printf("%d \n", c);

    int a; char c;
    printf("자연수를 입력하시오 >>");
    scanf("%d", &a);
    printf("%d \n", a);
    int temp;

    //한 글자씩 받아서 파일이 끝이거나 개행 문자(줄 바꿈)를 문자를 만나면 입력을 멈추므로 항상 입력 버퍼를 비운다.
    // EOF = end of file
    // 조건에 부합하면, 입력 버퍼를 비운다 -> { }처럼 비워져 있음
    while((temp = getchar()) != EOF && temp != '\n') { }

    printf("알파벳 한 글자를 입력하시오 >>");
    scanf("%c", &c);
    printf("%c \n", c);
}