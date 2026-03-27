#include <stdio.h>
int main(void)
{
    int n, original, digitCount = 0;
    long long sum = 0;
    int temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    temp = n;
    if (temp == 0) digitCount = 1;
    while (temp != 0)
    {
        digitCount++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0)
    {
        int digit = temp % 10;
        long long power = 1;
        for (int i = 0; i < digitCount; i++)
            power *= digit;
        sum += power;
        temp /= 10;
    }
    if (sum == original)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");
    return 0;
}
