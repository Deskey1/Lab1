#include <stdio.h>

int main()
{
    double a, b, c, d;
    printf("Enter sides of first rectangle (a and b): ");
    scanf("%lf %lf", &a, &b);

    printf("Enter sides of second rectangle (c and d): ");
    scanf("%lf %lf", &c, &d);

    if ((a <= c && b <= d) || (a <= d && b <= c)) {
        printf("Yes, first rectangle can be placed inside of second rectangle.\n");
    } else {
        printf("No, first rectangle cant be placed in the second rectangle.\n");
    }

    return 0;
}