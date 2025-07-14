// Remove duplicates from an array.

#include<stdio.h>

int main(){
    int arr[] = {1,2,43,4,5,6,5,3,4};
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i< length; i++){
        for (int j = i+1; j<length;){
            if(arr[i]==arr[j]) {
                for(int k =j;k<length;k++){
                    arr[k]=arr[k+1];
                }
                length--;
            }else{
                j++;
            }
        }
    }

    for (int i = 0; i< length; i++){
        printf("%d, ", arr[i]);
    }

}