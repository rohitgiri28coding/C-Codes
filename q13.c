// Write a function to calculate factorial of a number using recursion.

#include <stdio.h>

long factorial(long num){
    if(num<=1) return 1;
    return num * factorial(num-1);
}

int main(){
    int num;
    while(1){
        printf("Enter a number for calculating factorial: ");
        scanf("%d", &num);

        if(num>=0){
            printf("Factorial of %d is %ld.", num, factorial(num));
            return 0;
        }else{
            printf("Please enter a whole number. \nFactorial is only defined for whole numbers.\n");
        }
    }
}