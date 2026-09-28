#include <stdio.h>

int main()
{
    double x1, x2;
    double b, c;

    printf("Enter x1: ");
    scanf("%lf", &x1);

    printf("Enter x2: ");
    scanf("%lf", &x2);

    b = -(x1 + x2);
    c = x1 * x2;

    printf("a = 1\n");
    printf("b = %.2f\n", b);
    printf("c = %.2f\n", c);

    return 0;
}