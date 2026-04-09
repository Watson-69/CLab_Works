#include <stdio.h>
int main(){
    int SIZE;
    printf("Enter the size of the  matrix: ");
    scanf("%d", &SIZE);
    int ARR1[SIZE][SIZE],ARR2[SIZE][SIZE],C[SIZE][SIZE];
    int row,col;
    printf("Enter elemeno of matrix 1:\n");
    for(row=0;row<SIZE;row++){
        for(col=0;col<SIZE;col++){
            scanf("%d",&ARR1[row][col]);
        }
    }
    printf("Enter elemeno of matrix 2:\n");
    for(row=0;row<SIZE;row++)
    {
        for(col=0;col<SIZE;col++)
        {
            scanf("%d",&ARR2[row][col]);
        }
    }
    for(row=0;row<SIZE;row++)
    {
        for(col=0;col<SIZE;col++)
        {
           C[row][col]=ARR1[row][col]*ARR2[row][col];
        }
    }
    printf("\n Product is\n");
    for(row=0;row<SIZE;row++)
    {
        for(col=0;col<SIZE;col++){
           printf("%4d ",C[row][col]);
        }
        printf("\n");
    }
    return 0;
}