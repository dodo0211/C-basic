#include <stdio.h>

//함수 선언할 때 타입명시 잊지말기
void process(void);

int main () {
    process();
    process();
    process(); 
}

void process(void) {
    static int a = 5;
    a = a + 1;
    printf("%d \n", a);
}