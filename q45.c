// Pointers'

#include<stdio.h>

int main(){

    int x=10, *ptr =&x;
    void *p = &x;

    printf("%p\n", &ptr);
    printf("%p\n", ptr);
    printf("%p", &x);

    return 0;

}