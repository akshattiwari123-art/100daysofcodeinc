#include <stdio.h>

int main() {
    int n, temp, digit, fact, sum = 0, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;  // store the original number

    while (n > 0) {
        digit = n % 10;     // extract last digit
        fact = 1;

        // calculate factorial of the digit
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;        // add factorial to sum
        n /= 10;            // remove last digit
    }

    if (sum == temp)
        printf("%d is a Strong Number.\n", temp);
    else
        printf("%d is not a Strong Number.\n", temp);

    return 0;
}
