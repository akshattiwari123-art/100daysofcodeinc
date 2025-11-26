#include <stdio.h>

int main() {
    int num, digit, freq[10] = {0};
    int max = 0, maxDigit = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Work with positive value of number
    if(num < 0)
        num = -num;

    // Count frequency of each digit
    while(num > 0) {
        digit = num % 10;   // extract last digit
        freq[digit]++;      // increase frequency
        num /= 10;          // remove last digit
    }

    // Find digit with maximum frequency
    for(int i = 0; i < 10; i++) {
        if(freq[i] > max) {
            max = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring most times: %d\n", maxDigit);
    printf("It occurs %d times.\n", max);

    return 0;
}
