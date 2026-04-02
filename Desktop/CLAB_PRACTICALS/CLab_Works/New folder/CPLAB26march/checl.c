#include <stdio.h>

void prime_fact(int s){
    if(s <= 1)
        return;
    
    int num = 2;
    while(num * num <= s){
        while(s % num == 0){
            printf("%d \n", num);
            s = s / num;
        }
        num++;
    }
    if(s > 1)
        printf("%d \n", s);
}

int main()
{
   int no;
   scanf("%d", &no);
   prime_fact(no);
   return 0;
}
