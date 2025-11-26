#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merge[200];
    int n1, n2, i, j;

    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements of first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements of second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Copy arr1 elements into merge array
    for(i = 0; i < n1; i++) {
        merge[i] = arr1[i];
    }

    // Copy arr2 elements into merge array
    for(j = 0; j < n2; j++) {
        merge[i + j] = arr2[j];
    }

    printf("Merged array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merge[i]);
    }

    return 0;
}
