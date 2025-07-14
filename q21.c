// Implement binary search on a sorted array.

#include<stdio.h>

int main(){
    int arr[] = {1,2,43,4,5,3,4};
    int length = sizeof(arr) / sizeof(arr[0]);

    int targetElement = 42;

    for (int i = 0; i< length-1; i++){
        for (int j = 0; j<length; j++){
            if(arr[i]>arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int first = 0, last = length-1;first<=last;){
        int mid = first + (last - first) / 2;
        if(arr[mid]==targetElement){
            printf("Element found!");
            return 0;
        }else if (arr[mid]>targetElement){
            last=mid-1;
        }else{
            first=mid+1;
        }
    }
    printf("Element not found!");
    return 0;
}