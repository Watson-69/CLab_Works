#include <stdio.h>
// int main(){
//     int i,j,temp;
//     int n;
//     printf("Enter a number to gen square ");
//     scanf("%d",&n);
//     temp=n;
//     for(i=1;i<=temp;i++){
//         for(j=1;j<=temp-1;j++){
//             printf("*"); 
//         }
//         printf("\n");
//     }
//     return 0;
// }
// int main(){
//     int i,j;
//     int n;
//     printf("Enter a number ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
// int main(){
//     int i,j;
//     int n;
//     printf("Enter a number ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         for(j=n;j>=i;j--){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }
int main(){
    int i,j;
    int n,num=1;
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",num++);
            // num++;
        }
        printf("\n");
    }
    return 0;
}