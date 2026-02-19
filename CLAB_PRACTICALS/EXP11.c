#include <stdio.h>

int main(void)
{
    int n;
    long long a=0,b=1,next;

    printf("Enter number of terms: ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        printf("%lld ",a);
        next=a+b;
        a=b;
        b=next;
    }

    return 0;
}
