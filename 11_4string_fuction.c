#include <stdio.h>
#include <string.h>

int main() {
    char a[20] = " SunYoung Heo";
    char b[20] = " HoonIl Song";
    char c[40 ] = "My name is";
    char d[40] = "I love my boyfriend";
    char e[20] = "I love";

    // strlen() 문자열의 길이
    printf("문자열의 길이: %d \n", strlen(a));

    // strcmp() 문자열이 1이 문자열 2보다 사전적으로 앞에 있으면 -1, 뒤에 있으면 1을 반환한다.
    printf("두 배열의 사전 순 비교: %d \n", strcmp(a, b));

    // strcpy() 문자열 복사
    strcpy(a, b);
    printf("복사된 문자열: %s \n", a);

    // strcat() 뒤에 있는 문자열을 앞에 있는 문자열에 합침
    strcat(c, a);
    printf("합쳐진 결과 문자열: %s \n", c);

    // strstr() 긴 문자열에서 짧은 문자열을 찾아 그 위치를 반환
    printf("찾은 문자열: %s \n", strstr(d, e));
}