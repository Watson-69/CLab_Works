#include <stdio.h>
int main(void)
{
    int age;
    float height;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your height (in cm): ");
    scanf("%f", &height);
    printf("\nYou entered:\n");
    printf("Age = %d\n", age);
    printf("Height = %.2f cm\n", height);
    return 0;
}
