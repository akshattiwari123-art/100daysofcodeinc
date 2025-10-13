#include <stdio.h>

int main() {
    int num, i;
    int binary[32]; // Array to store binary digits
    int index = 0;

    // Input the number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary representation: 0\n");
        return 0;
    }

    // Convert to binary
    while (num > 0) {
        binary[index] = num % 2; // Store remainder (0 or 1)
        num /= 2;                 // Reduce number
        index++;
    }

    // Print binary in reverse order
    printf("Binary representation: ");
    for (i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
