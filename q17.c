// Find the largest and smallest element in an array.

#include<stdio.h>

int main(){
    int arr[] = {1,2,43,4,5,3,4};
    size_t length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i< length-1; i++){
        for (int j = i+1; j<length; j++){
            if(arr[i]>arr[j]) {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }

    for (int i = 0; i< length; i++){
        printf("%d, ", arr[i]);
    }

    printf("\nLargest Element: %d\nSmallest Element: %d", arr[length-1], arr[0]);
}