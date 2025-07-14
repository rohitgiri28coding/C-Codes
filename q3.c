#include <stdio.h>

int main(){
    double num1, num2;
    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);

    printf("Before Swap: num1 = %.2lf & num2 = %.2lf\n", num1, num2);

    num1 = num1+num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After Swap: num1 = %.2lf & num2 = %.2lf\n", num1, num2);

    return 0;

}