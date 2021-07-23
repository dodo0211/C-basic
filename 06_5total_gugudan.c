#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 9) {
        printf("==== %d단 ====\n", i);

        int j = 1;
        while(j <= 9) {
            printf("%d * %d = %d \n", i, j, i*j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}