#include <stdio.h>
// 다양한 자료형의 최소값, 최댓값
#include <limits.h>

int main() {
    int a[10] = {6, 5, 4, 3, 9, 8, 0, 1, 2, 7};

    // INT_MIN은 limits.h에 미리 정의되어 있음. 약 -20억
    int i, maxValue = INT_MIN;

    for(i=0;i<10;i++) {
        if(maxValue < a[i]) {
            maxValue = a[i];
        }
    }
    printf("%d \n", maxValue);
}