#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // find the greater number
    max = (a > b) ? a : b;

    // loop until a common multiple is found
    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("LCM of %d and %d is: %d\n", a, b, max);
            break;
        }
        max++;
    }

    return 0;
}
