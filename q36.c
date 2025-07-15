// Write to a file and read it back.

#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE* fptr;

    fptr = fopen("xyz.txt", "w");
    if (fptr == NULL) {
        printf("The file is not opened.");
        return 1;
    }

    char str[50], str1[50];
    printf("Enter a string of maximum 50 characters long: ");
    fgets(str, sizeof(str), stdin); 

    fputs(str, fptr);

    fclose(fptr);
    printf("Data successfully written in file xyz.txt\n");

    fptr = fopen("xyz.txt", "r");

    while(fgets(str1, 50, fptr) != NULL){
        printf("%s", str1);
    }

    fclose(fptr);

    printf("The file is now closed.");

    return 0;

}