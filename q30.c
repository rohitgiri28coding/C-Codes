// Understand pointer to pointer with an example.

#include<stdio.h>

int main(){
    int x = 10;
    int * ptr = &x;
    int **ptr1 = &ptr;

      printf("Value of x: %d\n", x);
    printf("Value at *ptr: %d\n", *ptr);
    printf("Value at **ptr1: %d\n", **ptr1);

    printf("Address of x: %p\n", (void*)&x);
    printf("Value of ptr (address of x): %p\n", (void*)ptr);
    printf("Address of ptr: %p\n", (void*)&ptr);
    printf("Value of ptr1 (address of ptr): %p\n", (void*)ptr1);
    printf("Value at *ptr1 (should be value of ptr): %p\n", (void*)*ptr1);

    return 0;
}