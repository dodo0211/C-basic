#include <stdio.h>

int main() {
    char a[100];
    printf("문자열을 입력하시오 >>");
    gets(a);
    printf("%s \n", a);
}