#include <stdio.h>

int main(void) {

    // 1부터 n까지의 합
     int n, sum = 0;

     printf("n을 입력하세요 >>");
     scanf("%d", &n);

     for(int i=1;i<=n;i++){
         sum = sum + i;
     }
     printf("%d \n", sum);

    ////////////////////////////////////////////
    // -1이 입력되기 전까지 입력된 수들의 합
     int sum2 = 0;
     for(;1;) {
         int x;
         printf("x값을 입력하세요 (-1: break) >>");
         scanf("%d", &x);

         if (x == -1) break;
         sum2 += x ;
     }
     printf("%d \n", sum2);

    return 0;
}