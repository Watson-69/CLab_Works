#include <stdio.h>

int main(void)
{
    int A[10][10], T[10][10];
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &A[i][j]);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            T[j][i] = A[i][j];

    printf("Transpose Matrix:\n");
    for(i = 0; i < c; i++)
    {
        for(j = 0; j < r; j++)
            printf("%d ", T[i][j]);
        printf("\n");
    }

    return 0;
}
