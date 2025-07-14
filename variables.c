#include <stdio.h>

int main(){
    // Declare and initialize variables
    int a = 5;          // Integer variable 
    float b = 3.14f;   // Floating-point variable
    char c = 'A';      // Character variable
    double d = 2.718;  // Double-precision floating-point variable

    // Print the values of the variables

    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", b);
    printf("Character: %c\n", c);
    printf("Double: %.3f\n", d);


    int x;        // Another integer variable

    printf("Size of int: %zu bytes\n", sizeof(x));
    
    return 0;
}