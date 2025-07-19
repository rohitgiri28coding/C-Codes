// 2023 q9

#include <stdio.h>
#include <stdlib.h>
int main( )
{
int *ptr;
ptr = (int*) calloc(3, sizeof(int));
ptr[2] = 30;
printf("%d", *ptr);
free(ptr);
}

// OUTPUT: 0