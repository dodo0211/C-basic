#include <stdio.h>

int main() {
    char a[] = "Hello World";
    
    int count = 0;
    for(int i=0; i<=10; i++){
        if(a[i] == 'l'){
            count++;
        }
    }
    printf("%d \n", count);

    return 0;
}