// 2024 q32

#include<stdio.h>

int main(){
    int i=0;
    int x = i++;
    y = ++i;
    printf("%d%d", x,y);
    return 0;
}


// OUTPUT: COMPILATION ERROR: use of undeclared identifier 'y'