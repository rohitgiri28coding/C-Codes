// Implement your own strlen, strcpy, strcmp functions.

#include <stdio.h>

int main(){

    char name[] = "ARA_PATNA";

    int length = sizeof(name)/sizeof(name[0]);

    char cpy[length];

    for (int i = 0;i<length-1;i++){
        cpy[i] = name[i];
    } 

    int flag = 0;
    for(int i = 0; i < length;i++){
        if(name[i] != cpy[i]){
            flag++;
            break;
        }
    }
    if(flag == 0)
        printf("The two strings are equal.");
    else    
        printf("The two string are not equal.");

}