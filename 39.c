#include <stdio.h>

int main() {
    int n, prod = 1, found = 0;
    scanf("%d", &n);

    while(n > 0) {
        int d = n % 10;
        if(d % 2 == 1) {
            prod *= d;
            found = 1;
        }
        n /= 10;
    }

    if(found) printf("Product = %d", prod);
    else printf("No odd digits");

    return 0;
}
