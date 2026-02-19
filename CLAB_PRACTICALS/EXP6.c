#include <stdio.h>
int main(void)
{
    int a, b, c, max1, max2;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max1 = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    max2 = a;
    if (b > max2) max2 = b;
    if (c > max2) max2 = c;
    printf("Greatest using ?: %d\n", max1);
    printf("Greatest using if-else: %d\n", max2);
    return 0;
}
