#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
    char fn[50], old_s[50], new_s[50], word[100];
    int count = 0;
    FILE *fptr, *temp;
    printf("Enter filename: ");
    scanf("%s", fn);
    printf("Enter string to replace: ");
    scanf("%s", old_s);
    printf("Enter new string: ");
    scanf("%s", new_s);
    fptr = fopen(fn, "r");
    temp = fopen("temp.txt", "w");
    if (fptr == NULL || temp == NULL) return 1;
    while (fscanf(fptr, "%s", word) != EOF) {
        if (strcmp(word, old_s) == 0) {
            fprintf(temp, "%s ", new_s);
            count++;
        } else {
            fprintf(temp, "%s ", word);
        }
    }
    fclose(fptr);
    fclose(temp);
    remove(fn);
    rename("temp.txt", fn);
    printf("Total appearances: %d\n", count);
    return 0;
}
