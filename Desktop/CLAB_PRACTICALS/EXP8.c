#include <stdio.h>

int main(void)
{
    int n, i = 1;
    long long sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i;
        i++;
    }

    printf("Sum = %lld\n", sum);
    return 0;
}
