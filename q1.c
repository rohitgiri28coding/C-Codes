//Write a program to input two integers and print their sum, difference, and product.

#include <stdio.h>

int main(){
    double num1, num2;
    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);

    double sum = num1+num2;
    double diff = num1-num2;
    double prod = num1*num2;

    printf("Sum %.2lf + %.2lf =  %.2lf \n", num1, num2, sum);
    printf("Difference %.2lf - %.2lf =  %.2lf \n", num1, num2, diff);
    printf("Product %.2lf * %.2lf =  %.2lf", num1, num2, prod);

    return 0;
}