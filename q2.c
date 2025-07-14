// Find the size of all basic data types using sizeof.

#include <stdio.h>

int main(){
    int a;
    float c;
    double d;
    long b;
    char ch;

    printf("SIZE OF DATA TYPES IN C \nint -- %zu \nlong -- %zu \nfloat -- %zu \ndouble -- %zu \nchar -- %zu", sizeof(a), sizeof(b), sizeof(c), sizeof(d), sizeof(ch));
        
    return 0;

}