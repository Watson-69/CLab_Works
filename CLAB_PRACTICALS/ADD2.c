#include <stdio.h>
int main(void)
{
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Sum = %.2f\n", a + b);
    return 0;
} 
