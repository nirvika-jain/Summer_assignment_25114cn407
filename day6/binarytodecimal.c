#include <stdio.h>

int main() {
    int n, i = 0;
    int arr[50];

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    while (n > 0) {
        arr[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", arr[j]);
    }
    printf("\n");

    return 0;
}
