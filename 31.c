#include <stdio.h>

int main() {
    int n;
    int bin = 0, place = 1;
    scanf("%d", &n);

    while(n > 0) {
        bin += (n % 2) * place;
        place *= 10;
        n /= 2;
    }

    printf("Binary = %d", bin);
    return 0;
}
