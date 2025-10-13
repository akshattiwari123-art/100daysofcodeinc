#include <stdio.h>

int main() {
    int n, i;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number.\n");
    } else {
        printf("Numbers from 1 to %d are:\n", n);
        for (i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
