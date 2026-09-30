#include <stdio.h>

void main() {
    int n, temp, rem, arm = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while (n != 0) {
        rem = n % 10;
        arm= arm + rem * rem * rem;
        n = n / 10;
    }

    if (arm == temp)
        printf("%d is an Armstrong number.\n", temp);
    else
        printf("%d is not an Armstrong number.\n", temp);

}
