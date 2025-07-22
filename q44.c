// Linear Search

#include<stdio.h>

int main(){
    int arr[] = {1,2,5,3,7,34,23}, targetSearch;

    int size = sizeof(arr)/sizeof(arr[0]);

    printf("Searching element in array using Linear Search.\n");
    
    printf("Enter value to find in array: ");
    scanf("%d", &targetSearch);
    
    
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==targetSearch){
            printf("Element \"%d\" found in the array!", targetSearch);
            return 0;
        }
    }
    printf("Not found.");

    return 0;
    
}