// 2023 q 4

#include <stdio.h>
void main( )
{
    int x = -1, y = 1, z = 0;
    if(x && y++ && z)    // -1, 2, 0
    ++x, y++, --z;      
    printf("%d, %d, %d", x++, y++, z++); 
}

// OUTPUT: -1, 2, 0