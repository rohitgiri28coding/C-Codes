// Swap two variables using pointers.

#include<stdio.h>

int main(){
    int x = 10, y =20;

    printf("Before Swap: %d & %d\n", x, y);

    int *ptr1 = &x, *ptr2 = &y;
    
    *ptr1 = *ptr1+*ptr2;

    *ptr2=*ptr1-*ptr2;
    *ptr1=*ptr1-*ptr2;

    printf("After Swap: %d & %d", x, y);


}