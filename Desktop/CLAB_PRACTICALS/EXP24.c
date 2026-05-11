#include <stdio.h>
void updateValue(int *ptr){
*ptr=*ptr+10;
}
int main(){
int num=20;
printf("Value before function call: %d\n",num);
updateValue(&num);
printf("Value after function call: %d\n",num);
return 0;
}
