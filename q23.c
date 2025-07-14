// Check whether a string is a palindrome.

#include <stdio.h>

int main(){

    char name[] = "ARA";

    int length = sizeof(name)/sizeof(name[0]) - 1;

    char rev[length+1];

    for (int i = 0, j = length-1;i<length;i++,j--){
        rev[j] = name[i];
    } 
    rev[length]='\0';

    int flag = 0;
    for(int i = 0; i < length;i++){
        if(name[i] != rev[i]){
            flag++;
            break;
        }
    }
    if(flag == 0)
        printf("The given string is a palindrome.");
    else    
        printf("The given string is not a palindrome.");

}