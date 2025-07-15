// Implement malloc and calloc to store array elements and calculate average.

#include<stdio.h>
#include<stdlib.h>

int main() {
    int n;
    double *arr, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr = (double *)malloc(n * sizeof(double));
    // arr = (double *)calloc(n, sizeof(double));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

    printf("Average = %.2lf\n", sum / n);

    free(arr);  // Free the allocated memory
    return 0;
}
