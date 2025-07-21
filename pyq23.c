// 2022 q3

#include<stdio.h>

int main(){
    int x =0, y=0;
    if(x&&y++)
        printf("%d..%d", x++, y);
    printf("%d..%d", x, y);
}

// OUTPUT: 0..0
// Since x = 0, the left operand is false, so the right side y++ is not evaluated.
