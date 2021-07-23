#include <stdio.h>

int main() {
    int n;
    printf("출력할 구구단의 단을 구하시오 >>");
    scanf("%d", &n);

    int i = 1;
    while( i <= 9){
        printf("%d * %d = %d \n", n, i, n*i);
        i++;
    }

    return 0;
}