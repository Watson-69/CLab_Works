#include <stdio.h>

int main(void)
{
    double a, b;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    printf("Addition = %.2f\n", a + b);
    printf("Subtraction = %.2f\n", a - b);
    printf("Multiplication = %.2f\n", a * b);
    if (b == 0)
        printf("Division = not possible (division by zero)\n");
    else
        printf("Division = %.2f\n", a / b);
    return 0;
} 
