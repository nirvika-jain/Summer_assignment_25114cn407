#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, rem, sum = 0, digits = 0;
    printf("enter a no: ");
    scanf("%d", &num);

    temp = num;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp != 0) {
        rem = temp % 10;
        sum += round(pow(rem, digits));
        temp /= 10;
    }

    if (sum == num) printf("its an Armstrong number\n");
    else printf("its not an Armstrong number\n");

    return 0;
}
