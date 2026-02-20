#include <stdio.h>
int main(void)
{
    double r;
    const double pi = 3.141;
    printf("Enter radius: ");
    scanf("%lf", &r);
    printf("Area = %.2f\n", pi * r * r);
    printf("Circumference = %.2f\n", 2 * pi * r);
    return 0;
}
