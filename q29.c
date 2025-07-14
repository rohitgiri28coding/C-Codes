// Write a program to reverse a string using pointers.

#include<stdio.h>

int main(){
    char str[] = "ROHIT";

    char *ptr = &str[0];

    int len = sizeof(str)/sizeof(str[0]);

    for(int i =0, j = len-2; i<len/2;i++, j--){
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    for(int i = 0; i<len-1; i++){
        printf("%c", str[i]);
    }
}