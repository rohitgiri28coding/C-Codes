// Print elements of an array using pointer notation.

#include<stdio.h>

int main(){
    int arr[] = {5,6,4,5,22,43,87};
    int length = sizeof(arr)/sizeof(arr[0]);
    int *ptr = arr;
    for(int i = 0; i<length; i++){
        printf("%d, ", *(ptr+i));
    }
}