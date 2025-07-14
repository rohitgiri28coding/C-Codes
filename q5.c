// Check if a number is even or odd using bitwise operators.

#include <stdio.h>

int main(){
    int num1;
    printf("Enter a number: ");
    scanf("%d", &num1);

    if((num1 & 1) == 0){
        printf("%d is an even number.", num1);
    }else{
        printf("%d is a odd number.", num1);
    }
    return 0;
}