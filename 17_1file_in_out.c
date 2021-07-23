#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char s[20] = "Hello world";
    FILE *fp;
    fp = fopen("temp.txt", "w");
    fprintf(fp, "%s \n", s);
    fclose(fp);
}