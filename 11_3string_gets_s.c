#include <stdio.h>

int main() {
    char a[100];
    printf("문자열을 입력하세요 >>");
    gets_s(a, size_of(a));
    printf("%s \n", a);
}