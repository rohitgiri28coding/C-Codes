// Print all leters in english alphabet

#include<stdio.h>

int main(){
    int x = 65;
    int *ptr=&x;

    for(int i = 0; i<26;i++)
        printf("%c ", (*ptr)++);
}