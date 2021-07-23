#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = malloc(sizeof(int));
    printf("%d \n", a);
    // 메모리 해제
    free(a);

    a = malloc(sizeof(int));
    printf("%d \n", a);
    free(a);
}