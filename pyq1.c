// 2024 q1

#include<stdio.h>

int main(){
    int x = 65, *p = &x;
    
    void *q = p;

    char *r = q;

    printf("%c", *r);

}


//  OUTPUT: A