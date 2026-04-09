#include <stdio.h>
int main(void)
{
    long long n, temp, reverse = 0;
    int digits = 0;
    printf("Enter a number: ");
    scanf("%lld", &n);
    temp = n;
    if (temp == 0)
    {
        digits = 1;
        reverse = 0;
    }
    else
    {
        while (temp != 0)
        {
            digits++;
            reverse = reverse * 10 + (temp % 10);
            temp /= 10;
        }
    }
    printf("Digits = %d\n", digits);
    printf("Reverse = %lld\n", reverse);
    return 0;
}
