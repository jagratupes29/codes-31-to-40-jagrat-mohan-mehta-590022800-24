#include <stdio.h>

int main() {
    int n, result = 0, place = 1;
    printf("Enter a binary number: ");
    scanf("%d", &n);

    while (n > 0) {
        int bit = n % 10;
        result += (bit == 0 ? 1 : 0) * place;
        n /= 10;
        place *= 10;
    }

    printf("1's Complement = %d\n", result);
    return 0;
}
