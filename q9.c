// Find the greatest of three numbers.

#include <stdio.h>

int main(){
    double num1, num2, num3;
    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);
    printf("Enter another number: ");
    scanf("%lf", &num3);

    if(num1 == num2 && num2 == num3)
    {
        printf("All numbers are equal.");
    }
    else if((num1>=num2 && num1>=num3))
    {
        printf("%.2lf is the largest number.", num1);
    }
    else if ((num2>=num1 && num2>=num3))
    {
        printf("%.2lf is the largest number.", num2);
    }
    else
    {
        printf("%.2lf is the largest number.", num3);
    }
    
    return 0;
    
}