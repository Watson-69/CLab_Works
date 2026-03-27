#include <stdio.h>
// void swap(int a ,int b){
//     int temp=a;
//     temp=a;
//     a=b;
//     b=temp;
//     printf("INSidE FUNCTION : a=%d,b=%d\n",a,b);
// }
// void swap(int *a,int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }
long long int fact(long long int x){
    if(x==0 || x==1){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
    // int res=1;
    // while (x!=0)
    // {
    //     res=res*x;
    //     x--;
    // }
    // return res;
    
}
int main(){
    int q;
    printf("ENTER THE FACTORIAL NUMBVER: ");
    scanf("%d",&q);
    fact(q);
    printf("THE fACTORIAL oD THE NUMBER IS %lld",fact(q));
    // int x,y;
    // printf("ENTER 2 num ");
    // scanf("%d %d",&x,&y);
    // printf("%d %d\n",x,y);
    // swap(&x,&y);
    // printf("%d %d",x,y);
    // int x,y;
    // printf("ENTER 2 numbers ");
    // scanf("%d %d",&x,&y);
    // printf("BEFRE SWAP: x=%d,y=%d\n",x,y);
    // swap(x,y);
}