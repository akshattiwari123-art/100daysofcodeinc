#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        for (i = 1; i <= 2*n; i += 2) {
            sum += i;
        }
        printf("The sum of the first %d odd numbers is %d.\n", n, sum);
    }

    return 0;
}
