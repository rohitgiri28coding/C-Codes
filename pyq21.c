// 2022 q1
#include<stdio.h>

int main(){
    const int a=4;
    float b;
    b = ++a;
    printf("%d, %f", a, ++b);
}

// OUTPUT: Compile error