// Reallocate memory using realloc and add more values.

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    double *arr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    arr = (double*) malloc(n*sizeof(double));

    if (arr == NULL) {
        printf("Initial memory allocation failed.\n");
        return 1;
    }

    printf("Enter elements for the array(%d)\n", n);
    for(int i=0; i<n;i++){
        printf("Enter element %d in array: ", i+1);
        scanf("%lf", &arr[i]);
        sum +=arr[i];
    }
    int s;

    printf("Enter number of elements to be added: ");
    scanf("%d", &s);
    
    double *temp = (double*) realloc(arr, (n+s)*sizeof(double));
// Resize previously allocated memory block. Returns NULL if it fails (so always use a temporary pointer).
    if (temp == NULL) {
        printf("Reallocation of memory failed.\n");
        free(arr);
        return 1;
    }
    arr = temp;

    for (int i = n; i < (s+n); i++)
    {
        printf("Enter element %d in array: ", i+1);
        scanf("%lf", &arr[i]);
        sum +=arr[i];
    }
    
    printf("Sum: %lf\n", sum);

    printf("Average: %lf", sum/(n+s));

    free(arr);
    
    return 0;
}