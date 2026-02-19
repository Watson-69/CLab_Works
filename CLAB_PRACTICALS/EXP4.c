#include <stdio.h>
int main(void)
{
    double u, a, t, b, c, p;
    double v, S, Z, H;
    printf("Enter u, a, t: ");
    scanf("%lf %lf %lf", &u, &a, &t);
    printf("Enter b, c, p: ");
    scanf("%lf %lf %lf", &b, &c, &p);
    v = u + a * t;
    S = u * t + 0.5 * a * t * t;
    if (b == 0)
        Z = 0;
    else
        Z = (2 * a) + (v / b) + (9 * c);
    H = v * v + p * p;
    printf("\n(i)  v = u + a*t = %.2f\n", v);
    printf("(ii) S = u*t + 1/2*a*t^2 = %.2f\n", S);
    if (b == 0)
        printf("(iii) Z = 2*a + v/b + 9*c = not possible (b = 0)\n");
    else
        printf("(iii) Z = 2*a + v/b + 9*c = %.2f\n", Z);
    printf("(iv) H = v^2 + p^2 = %.2f\n", H);
    return 0;
}
