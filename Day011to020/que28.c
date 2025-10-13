#include <stdio.h>

int main() {
    int n, i;
    long long product = 1; // Use long long to handle large products

    // Input the value of n
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Check if n is less than 2
    if (n < 2) {
        printf("No even numbers in the given range.\n");
        return 0;
    }

    // Loop from 2 to n and multiply only even numbers
    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    // Display the result
    printf("Product of even numbers from 1 to %d is: %lld\n", n, product);

    return 0;
}
