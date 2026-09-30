#include <stdio.h>

void main() {
    int n, i, j, c;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);

    for (i = 1; i <= n; i++) {
        c = 0;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
               c++;
            }
        }

        if (c==0) {
            printf("%d ", i);
        }
    }

}

