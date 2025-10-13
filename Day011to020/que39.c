#include <stdio.h>

int main() {
    int n, digit, product = 1;
    int hasOdd = 0;  // flag to check if odd digit exists

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        digit = n % 10;    // get last digit
        if (digit % 2 != 0) {  // check if odd
            product *= digit;
            hasOdd = 1;
        }
        n = n / 10;        // remove last digit
    }

    if (hasOdd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
