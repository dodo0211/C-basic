#include <stdio.h>

int main(void) {
    int n;
    char a;

    printf("반복할 횟수, 반복할 문자 >>");
    scanf("%d %c", &n, &a);

    while (n--)
    {
        printf("%c ", a);
    }   

    return 0;
}