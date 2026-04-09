#include <stdio.h>
// void display(int);
// void chec(int *);
int main(){
    int arr[]={10,20,30};
    int *p=arr;
    int *q=arr+2;
    printf("VALUE ADD %d \n",*p+*q);
    printf("POINTER _++ %d \n",*(p+1));
    printf("%d \n",p+q);
    printf("%ld \n",q-p);
    // int a=10,b=20;
    // int *p=&a;
    // int *q=&b;
    // int sum=*p+*q;
    // printf("%d",sum);
    // int arr[]={10,20,36,72,45,36};
    // int *j ,*k;
    // j=&arr[4];
    // k=(arr+4);
    // if(j==k)
    //     printf("SMAE");
    // else
    //     printf("Not same");
    // int *i,*j;
    // int arr[]={10,20,30,45,67,56,74};
    // i=&arr[1];
    // j=&arr[5];
    // printf("%u %d\n",j-i,*j-*i);
    // int a=10,b=20,c=30;
    // int *p;
    // p=&a;
    // printf("ADDRES OF A %u \n ,value %d \n",p,*p);
    // p--;
    // printf("ADDRES OF p++ %u \n value %d \n",p,*p);
    // p--;
    // printf("ADDRES OF p-- %u \n value %d \n",p,*p);


    // int i;
    // int marks[]={55,54,34,23,32,245,322};
    // for(i=0;i<=6;i++){
    //     display(marks[i]);
    //     chec(&marks[i]);
    // }
}
// void chec(int *n){ //call by referenxe
//     printf("%d \n ",*n);
// }
// void display(int m){
//     printf("%d ",m);
// }