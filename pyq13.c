// 2023 q2
#include <stdio.h>

void main(){
    int a = -7;  // -7, -6
    float b;  // -7, -7, -6
    b = a++;
    printf("%d, %f", a, ++b);
}

// OUTPUT: -6, -6.000000