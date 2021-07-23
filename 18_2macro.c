// macro
// 여러 개의 명령을 묶어 하나로 처리하는 것
#include <stdio.h>
#define PI 3.1415926535
#define POW(x) (x*x)
#define ll long long
#define ld long double

int main() {
    int r = 10;
    printf("원의 둘레: %.2f \n", 2*PI*r);

    int x = 10;
    printf("x의 제곱: %d \n", POW(x));

    ll a = 987654321000;
    ld b = 100.5054;
    printf("%.1f \n", a*b);
}