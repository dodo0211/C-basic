/**
 * 2021.06.29 
 */
#include <stdio.h>

int main(void) {

    // switch-case 예제 1
    printf("점수를 입력하세요 >>");

    char score;
    scanf("%c", &score);

    // break를 넣지 않으면 그 밑을 쭉 실행함
    switch (score) {
        case 'a':   printf("A입니다. \n");  break;
        case 'b':   printf("B입니다. \n");  break;
        case 'c':   printf("C입니다. \n");  break;
        default:    printf("F입니다. \n"); break;
    }

    ////////////////////////////////////////////////////
    // switch-case 예제2
    printf("월을 입력하세요 >>");

    int month;
    scanf("%d", &month);

    switch (month)
    {
        case 3: case 4: case 5:
            printf("봄 \n");    break;
        case 6: case 7: case 8:
            printf("여름 \n");    break;
        case 9: case 10: case 11:
            printf("가을 \n");    break;
        case 12: case 1: case 2:
            printf("겨울 \n");    break;
        
        default:    break;
    }

    return 0;
}