// 2023 q8

#include<stdio.h>
int main( )
{
    int **ptr;
    int temp = 65;
    ptr[0] = &temp;
    printf("%d", ptr[0][0]);
}

// OUTPUT: Segmentation fault 

// A segmentation fault is a type of runtime error that occurs when a program tries to access 
// memory that it’s not allowed to use.