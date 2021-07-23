#include <stdio.h>
#include <stdlib.h>

int main() {
    int** p = (int**)malloc(sizeof(int*) * 3);
    for (int i=0;i<3;i++) {
        *(p + i) = (int*)malloc(sizeof(int) * 3);
        
    }

    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++){
            *(*(p+1) + j) = i * 3 + j;
        }
    }
    
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++){
            printf("%d ", *(*(p + i) + j));
        }
        printf("\n");
    }    
}