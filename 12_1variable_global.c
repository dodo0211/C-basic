#include <stdio.h>

//전역변수이기 때문에 어디서든 사용 가능
int a = 5;

int changeValue();

int main () {
    printf("%d \n", a);
    changeValue();
    printf("%d \n", a);
}

int changeValue() {
    a = 10;
}