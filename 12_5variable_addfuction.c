#include <stdio.h>

void add(int, int);

int main() {
    int a = 7;
    add(a, 10);
    printf("%d \n", a);
}

void add(int a, int b) {
    a = a +b;
}