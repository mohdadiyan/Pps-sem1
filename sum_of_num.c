#include <stdio.h>

void main() {
    int n, i, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum of numbers from 1 to n = %d\n", n, sum);

}
