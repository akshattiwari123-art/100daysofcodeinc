#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    double numerator = 1.0, denominator = 1.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += numerator / denominator;

        // update numerator and denominator for next term
        numerator += 2;
        denominator += 2;
    }

    printf("Sum of the series up to %d terms = %.4lf\n", n, sum);

    return 0;
}
