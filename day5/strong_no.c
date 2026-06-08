#include <stdio.h>

int main() {
    int num, originalNum, rem, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    while (num > 0) {
        rem = num % 10;
        
        int fact = 1;
        for (int i = 1; i <= rem; i++) {
            fact *= i;
        }
        
        sum += fact;
        num /= 10;
    }

    if (sum == originalNum && originalNum > 0) {
        printf("%d is a STRONG NUMBER.\n", originalNum);
    } else {
        printf("%d is NOT a STRONG NUMBER.\n", originalNum);
    }

    return 0;
}
