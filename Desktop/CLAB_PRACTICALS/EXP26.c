#include <stdio.h>
#include <string.h>
int main() {
    char str[100], sub[100];
    int i, j, count = 0;
    printf("Enter main string: ");
    gets(str); 
    printf("Enter substring: ");
    gets(sub);
    int strLen = strlen(str);
    int subLen = strlen(sub);

    for (i = 0; i <= strLen - subLen; i++) {
        for (j = 0; j < subLen; j++) {
            if (str[i + j] != sub[j]) break;
        }
        if (j == subLen) count++;
    }
    printf("Total appearances: %d\n", count);
    return 0;
}
