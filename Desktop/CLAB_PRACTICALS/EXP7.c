#include <stdio.h>

int main(void)
{
    char ch;
    int n;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);
    switch (ch)
    {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel\n");
            break;
        default:
            printf("Consonant\n");
    }
    printf("Enter a number: ");
    scanf("%d", &n);
    switch (n > 0 ? 1 : (n < 0 ? -1 : 0))
    {
        case 1:  printf("Positive\n"); break;
        case -1: printf("Negative\n"); break;
        default: printf("Zero\n");
    }
    return 0;
}
