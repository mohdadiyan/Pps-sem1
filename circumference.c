#include <stdio.h>

int main()
{
    float r, c;
    printf("Enter radius values: ");
    scanf("%f", &r);

    c = 2 * 3.14 * r;

    printf("Circumference = %f \n", c);

    return 0;
}
