// Sort an array using bubble sort / selection sort.

#include<stdio.h>

int main(){
    int arr[] = {1,2,43,4,5,3,4};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i<length-1; i++){
        int smallest = i;
        for (int j = i; j<length; j++){
            if(arr[smallest]>arr[j]) {
                smallest = j;
            }
        }
        if(smallest != i){
            arr[i] = arr[i] + arr[smallest];
            arr[smallest] = arr[i] - arr[smallest];
            arr[i] = arr[i] - arr[smallest];
        }
    }

    for (int i = 0; i< length; i++){
        printf("%d, ", arr[i]);
    }


}