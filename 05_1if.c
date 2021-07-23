/**
 * 2021.06.29 
 */
#include <stdio.h>

int main(void) {
    printf("방문객의 인원은? >>");

    // 조건문 예제 1
    int a;
    scanf("%d", &a);

    if(a == 1 || a == 2){
        printf("2인석으로 안내한다. \n");
    }else if (a == 3 || a == 4){
        printf("4인석으로 안내한다. \n");
    }else{
        printf("단체석으로 안내한다. \n");
    }

    // 조건문 예제 2
    printf("메인 메모리의 크기가 얼마인가요? >>");

    int size;
    scanf("%d", &size);

    if(size >= 16){
        printf("메인 메모리의 크기가 충분합니다. \n");
    }else {
        printf("메인 메모리를 증설하세요 \n");
    }

    return 0;
}