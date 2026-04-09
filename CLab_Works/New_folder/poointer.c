// int a=10,b=20,c=30;
// int *p[3];
// p[0]=&a;
// p[1]=&b;
// p[2]=&c;
// for(int i=0;i<3;i++){
//     printf("%d \n",*p[i]);
// }
// int arr[]={10,20,30,40,50};
// int n=5;
// int *start=arr;
// int *end=arr+n-1;
// while(start<end){
//     int temp=*start;
//     *start=*end;
//     *end=temp;
//     start++;
//     end--;
// }
// printf("Rev array ");
// for(int i=0;i<n;i++){
//     printf("%d ",arr[i]);
// }
// int are[]={5,10,15,50,45};
// int n=4;
// int *p=are;
// int sum=0;
// for(int i=0;i<=n;i++){
//     sum=sum+*(p+i);
// }
// printf("%d",sum);
#include <stdio.h>
// int a=10, b=20, c=30;
// int *p[3];  // Array of 3 pointers to int
// p[0] = &a;
// p[1] = &b;
// p[2] = &c;

// printf("Using array of pointers:\n");
// for(int i=0; i<3; i++){
//     printf("%d\n", *p[i]);
// }

// printf("\nUsing pointer to array:\n");
// // Method 2: Pointer to array
// int arr[] = {10, 20, 30};
// int *ptr = arr;  // Pointer to first element

// for(int i=0; i<3; i++){
//     printf("%d\n", *(ptr + i));
// }
// Method 1: Array of pointers to individual variables
// int* getmax(int *a,int *b){
//     if(*a > *b)
//         return a;
//     else
//         return b;
//         int x=10,y=20;
//         int *max;
//         max=getmax(&x,&y);
//         printf("MAXIMUM %d",*max);
// }
// int *findminarr(int arr[],int n){
//     int *min=&arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]<*min)
//             min=&arr[i];
//     }
//     return min;
//     int arr[]={5,2,8,2,1,9,0};
//     int *p=findminarr(arr,5);
//     printf("%d",*p);
// }
// int add(int a,int b){
//     return a +b;
// }
// int main(){
//     int (*fp)(int ,int);
//     fp=add;
//     printf("%d",fp(3,4));
// }
#include <stdio.h>
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }
int main() {
    int a = 10, b = 5;
    int (*fp)(int, int);
    fp = add;
    printf("Addition: %d\n", fp(a, b));
    fp = sub;
    printf("Subtraction: %d\n", fp(a, b));
    fp = mul;
    printf("Multiplication: %d\n", fp(a, b));
    fp = div;
    printf("Division: %d\n", fp(a, b));

    return 0;
}
