#include <stdio.h>
#include <math.h>

int main() {
    int n, num, first, last, digits, swapped;

    printf("Enter a number: ");
    scanf("%d", &n);

    num = n;
    last = n % 10;              // extract last digit

    // find number of digits
    digits = (int)log10(n);

    first = n / pow(10, digits);   // extract first digit

    // remove first and last digit, then swap
    swapped = last * pow(10, digits) + (n % (int)pow(10, digits)) / 10 * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
