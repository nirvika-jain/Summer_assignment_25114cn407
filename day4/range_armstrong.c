#include <stdio.h>
#include <math.h>

int main() {
    int start, end;
    printf("enter range (start end): ");
    scanf("%d %d", &start, &end);

    for (int num = start; num <= end; num++) {
        int temp = num, digits = 0, sum = 0;

        while (temp != 0) {
            digits++;
            temp /= 10;
        }

        temp = num;
        while (temp != 0) {
            int rem = temp % 10;
            sum += round(pow(rem, digits));
            temp /= 10;
        }

        if (sum == num && num > 0) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}
