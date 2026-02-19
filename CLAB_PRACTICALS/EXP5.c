#include <stdio.h>

int main(void)
{
    int x, y, temp;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    temp = x;
    x = y;
    y = temp;
    printf("After swap using temp: x=%d y=%d\n", x, y);
    printf("Enter x and y again: ");
    scanf("%d %d", &x, &y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swap without temp: x=%d y=%d\n", x, y);
    return 0;
}
