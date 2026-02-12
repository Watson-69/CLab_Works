#include <stdio.h>
// implicit conversion
int main()
// int x=10;
// char y='a';
// x=x+y;

// float z=x+1.0;
// printf("x=%d %n,z=%f",x,z);
// return 0;
// explicit conversion 👇
{
    double x = 1.2;
    int sum = (int)x + 1;   // correct type casting
    printf("sum = %d", sum);   // correct printf syntax

    return 0;
}
