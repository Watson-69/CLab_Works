// PRIME NUMBER
// #include <stdio.h>

// int is_prime(int x) {
//     if (x < 2) return 0; // 0 and 1 are not prime
//     for (int i = 2; i * i <= x; i++) {
//         if (x % i == 0) {
//             return 0; 
//         }
//     }
// }

// int main() {
//     int x;
//     printf(" ");
//     scanf("%d", &x);

//     if (is_prime(x)) {
//         printf("%d is a prime number.\n", x);
//     } else {
//         printf("%d is NOT a prime number.\n", x);
//     }

//     return 0;
// }
#include <stdio.h>

void check_prime() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("%d is NOT prime.\n", n);
        return; // Exit the function early
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("%d is NOT prime.\n", n);
            return; // Found a divisor, stop and exit
        }
    }

    // If the loop finished without returning, it's prime
    printf("%d is a prime number.\n", n);
}

int main() {
    check_prime(); // Just call it; no "if" statement needed here
    return 0;
}

