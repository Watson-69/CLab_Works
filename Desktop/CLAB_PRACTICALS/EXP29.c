#include <stdio.h>
struct Complex {
    float real;
    float imag;
};
int main() {
    struct Complex n1, n2, sum;
    printf("Enter real and imaginary part for 1st number: ");
    scanf("%f %f", &n1.real, &n1.imag);
    printf("Enter real and imaginary part for 2nd number: ");
    scanf("%f %f", &n2.real, &n2.imag);
    sum.real = n1.real + n2.real;
    sum.imag = n1.imag + n2.imag;
    printf("Sum = %.1f + %.1fi\n", sum.real, sum.imag);
    return 0;
}
