#include <stdio.h>

int main() {
    int a, b, hcf, x, y;
    scanf("%d %d", &a, &b);

    x = a; y = b;

    while(a != b) {
        if(a > b) a -= b;
        else b -= a;
    }
    hcf = a;

    int lcm = (x * y) / hcf;
    printf("LCM = %d", lcm);

    return 0;
}
