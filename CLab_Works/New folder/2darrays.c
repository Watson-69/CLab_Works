// int table[2][3]={0,0,0,1,1,1};
// int table[2][3]={{0,0,0},{1,1,1}};
// table[2][3]={
// {0,0,0},
// {1,1,1}
// };
/*
int table [][3]={
{0,0,0},
{1,1,1]
};
*/
// int table [2] [3]={
// {2}
// {1,2,1}
//};
// int matrix[2][3]={{1,4,2},{3,6,8}};
// matrix[0][0]=90;
// printf("%d",matrix[0][1]);
// printf("%d",matrix[0][0]);
// int matrix[2][3]={{1,40,21},{35,66,80}};
// int i,j;
// for (i=0;i<2;i++){
//     for(j=0;j<3;j++){
//         printf("%d\n",matrix[i][j]);
//     }
// }

// matrix printing
// int arr[3][3],i,j;
// for(i=0;i<3;i++){
//     for(j=0;j<3;j++){
//         printf("Enter a[%d][%d]:",i,j);
//         scanf("%d",&arr[i][j]);
//     }
// }
// printf("\n printing the elemtns \n");
// for(i=0;i<3;i++){
//     printf("\n");
//     for(j=0;j<3;j++){
//         printf("%d \t",arr[i][j]);
//     }
// }
#include <stdio.h>
int main(){
    int SIZE;
    printf("Enter the size of the square matrix: ");
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
           C[row][col]=ARR1[row][col]+ARR2[row][col];
        }
    }
    printf("\n Sum is\n");
    for(row=0;row<SIZE;row++)
    {
        for(col=0;col<SIZE;col++){
           printf("%4d",C[row][col]);
        }
        printf("\n");
    }
    return 0;
}