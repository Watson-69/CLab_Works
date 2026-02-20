#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    // string length
    // printf("Enter the string: ");
    // scanf("%s",&str);
    // printf("String lenghth is: %d",strlen(str));
    // char str[35];
    // while (str[i]!='\0')
    // {
    //     i+1;
    // }
    // printf
    // reverse string
    // char str[35];
    // printf("Enter the string: ");
    // scanf("%s",&str);
    // printf("Rev string is: %s",strrev(str));
    // manual reversal
    // char str[325];
    // int i,len,temp;
    // printf("Enter the string: ");
    // scanf("%s",&str);
    // len=strlen(str);
    // for(i=0;i<len/2;i++)
    // {
    //     temp=str[i];
    //     str[i]=str[len-i-1];
    //     str[len-i-1]=temp;
    // }
    // printf("NEW REVERSE STRING IS:  %s",str);
    //string copy and string n dopt
    // char str[325],ghee[312],n;
    // n=5;
    // printf("Enter the string: ");
    // scanf("%s",&str);
    // strncpy(ghee,str,n);
    // printf("%s",ghee);
    // strcpy(ghee,str); this
    // printf("%s",ghee);
    //strcat
    // char str[637], ghee[312];
    // char *n;

    // printf("Enter the string: ");
    // scanf("%s", str);

    // printf("Enter the string 2: ");
    // scanf("%s", ghee);

    // n = strcat(str, ghee);

    // printf("Value of new string is: %s", n);

    // return 0;
    // strcmp and strncmp
    // char str[637], ghee[312];
    // int result;

    // printf("Enter the string: ");
    // scanf("%s", str);

    // printf("Enter the string 2: ");
    // scanf("%s", ghee);

    // // Store the result of the comparison
    // result = strncmp(str, ghee,4);
    // printf("%d",result);

    // if (result == 0) {
    //     printf("The strings are equal.\n");
    // } else if (result < 0) {
    //     printf("String 1 comes before String 2 lexicographically.\n");
    // } else {
    //     printf("String 1 comes after String 2 lexicographically.\n");
    // }
    //alphabhetic
    // char ch;
    // printf("%c",ch);
    // scanf("%c",&ch);
    // if(isalpha(ch))
    //     printf("NUMERIC");
    // else
    //     printf("NO");
    //alphanumeric
    //     char ch;
    // printf("%c",ch);
    // scanf("%c",&ch);
    // if(isalnum(ch))
    //     printf("NUMERIC");
    // else
    //     printf("NO");
    //isdigit
    // char ch;

    // printf("Enter a character: ");
    // scanf(" %c", &ch); 
    // if (isdigit(ch))
    //     printf("NUM");
    // else
    //     printf("NOTNUM");
    //islower and isupper
    //     char ch;

    // printf("Enter a character: ");
    // scanf(" %c", &ch);

    // if (islower(ch)) {
    //     printf("LOWERCASE");
    // } else if (isupper(ch)) {
    //     printf("UPPERCASE");
    // } else {
    //     printf("NOT A LETTER");
    // }

    // return 0; 
// tolower and toupper
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (isupper(ch)) {
        printf("Converted to lowercase: %c", tolower(ch));
    } else if (islower(ch)) {
        printf("Converted to uppercase: %c", toupper(ch));
    } else {
        printf("Not an alphabetic character: %c", ch);
    }
    return 0;
}