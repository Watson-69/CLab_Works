#include <stdio.h>
#include <math.h>
int prime(int n)
{
    int i;
    if (n <= 1)
        return 0;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
int armstrong(int n)
{
    int sum = 0, temp = n, r;
    while (temp > 0)
    {
        r = temp % 10;
        sum = sum + (r * r * r);
        temp = temp / 10;
    }
    if (sum == n)
        return 1;
    else 
        return 0;
}
int perfect(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
            sum += i;
    }
    if (sum == n)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (prime(num))
        printf("The number is Prime\n");
    else
        printf("The number is not Prime\n");
    if (armstrong(num))
        printf("The number is Armstrong\n");
    else
        printf("The number is not Armstrong\n");
    if (perfect(num))
        printf("The number is Perfect\n");
    else
        printf("The number is not Perfect\n");
    return 0;
}
