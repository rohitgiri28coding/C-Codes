// Returning sum, product and difference 

#include<stdio.h>

void calculate(double num1, double num2, double *sum, double* diff, double* prod);

int main(){
    double num1, num2, sum, prod, diff;
    printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Enter another number: ");
    scanf("%lf", &num2);

    calculate(num1, num2, &sum, &diff, &prod);
    printf("Sum = %.2lf \nDifference = %.2lf \nProduct = %.2lf", sum, diff, prod);
    return 0;
}

void calculate(double num1, double num2, double *sum, double* diff, double* prod){
    *sum = num1 + num2;
    *diff = num1 - num2;
    *prod = num1 * num2;
}