#include <stdio.h>

int main() {
    int rows = 6;
    int i, j, k;

    // Pattern 1: Left-aligned triangle
    printf("Pattern 1:\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
                printf("* ");
        }
        printf("\n");
    }

    printf("\n");

    // Pattern 2: Right-aligned triangle
    printf("Pattern 2:\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        for (k = 1; k <= i; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}