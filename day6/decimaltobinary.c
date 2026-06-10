#include <stdio.h>

int main() {
    int b;
    int d = 0;

    printf("Enter binary no: ");
    scanf("%d", &b);

    while (b > 0) {
        d = d * 2 + (b % 10);
        b /= 10;
    }

    printf("Decimal no. is: %d\n", d);
    return 0;
}
