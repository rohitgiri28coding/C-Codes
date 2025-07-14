// Reverse an array in-place.

#include<stdio.h>

int main(){
    int arr[] = {1,2,43,4,5,3,4,2};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0, j = length-1; i< (length-1)/2; i++, j--){    
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j]; 
    }
    for (int i = 0; i< length; i++){
        printf("%d, ", arr[i]);
    }
}