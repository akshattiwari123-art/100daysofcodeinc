#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);  // Note the space before %c to consume any leftover newline

    printf("Enter second number: ");
    scanf("%d", &b);

    switch (op) {
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            if (b != 0)
                printf("Result: %.2f\n", (float)a / b);
            else
                printf("Error: Division by zero!\n");
            break;
        case '%':
            if (b != 0)
                printf("Result: %d\n", a % b);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
