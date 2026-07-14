#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int sign = 1;

    if (a < 0) {
        sign = -sign;
        a = -a;
    }

    if (b < 0) {
        sign = -sign;
        b = -b;
    }

    float left = 0, right = a, mid;

    for (int i = 0; i < 100; i++) {
        mid = (left + right) / 2;

        if (mid * b > a)
            right = mid;
        else
            left = mid;
    }
    float x = sign * mid;
    if(x == (int)x) {
        printf("%d", (int)x);
    } else {   
    printf("%f", sign * mid);
    }
    return 0;
}