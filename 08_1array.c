#include <stdio.h>

int main() {
    int a[10] = { 6, 5, 4, 3, 9, 8, 0, 1, 2, 7 };
    int i;

    for (i=0;i<10;i++) {
        printf("%d ", a[i]);
    }
}