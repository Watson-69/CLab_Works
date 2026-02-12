#include <stdio.h>
// #include <string>
int main(){
    char Name[70244];
    char DOB[2324];
    printf("Enter ur name");
    scanf("%s",Name);
    printf("UR name is %s \n",Name);
    printf("Enter ur DOB ");
    scanf("%s",DOB);
    long int Mobile;
    printf("Enter ur NUmber");
    scanf("%ld",&Mobile);
    printf("Name: %s DOB: %s Mobile: %ld",Name,DOB,Mobile);
}