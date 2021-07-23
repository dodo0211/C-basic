#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *a = malloc(100);
    // 포인터, 넣을 값, 크기
    memset(a, 'A', 100);
    for(int i=0;i<100;i++){
        printf("%c ", a[i]);
    }
}