// Maximum number

#include<stdio.h>

int maxNum(double num1, double num2, double *max);

void takeInput(double *num);

int main(){
    double num1, num2, max; 

    takeInput(&num1);
    takeInput(&num2);

    if(maxNum(num1, num2, &max)){
        printf("Both numbers are equal.");
        return 0;
    }
    printf("Maximum number = %lf.", max);
    return 0;
}

void takeInput(double *num){
    printf("Enter a number: ");
    scanf("%lf", num);
}

int maxNum(double num1, double num2, double *max){
    if(num1==num2){
        return 1;
    }else if(num1>num2){
        *max =num1;
    }else{
        *max = num2;
    }
    return 0;
}