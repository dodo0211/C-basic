#include <stdio.h>

void add(int *);

int main() {
    int a = 7;
    add(&a);
    printf("%d \n", a);
}

void add(int *a) {
    *a = (*a) + 10;
}