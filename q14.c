// Write a function to find GCD and LCM of two numbers.

#include <stdio.h>

void findGCD(int num1, int num2){
    
    int endRange = (num1<num2) ? num1 : num2;

    int gcd=1;

    for(int i =2; i<=endRange;){
        if(num1%i==0 && num2%i==0){
            gcd *=i;
            num1/=i;
            num2/=i;
        }else{
            i++;
        }
    }
    printf("GCD: %d\n",gcd);
}

void findLCM(int num1, int num2){
    
    int endRange = (num1<num2) ? num1 : num2;

    int lcm=1;

    for(int i =2; i<=endRange;){
        if(num1%i==0 || num2%i==0){
            lcm *=i;
            if(num1 % i == 0)  num1/=i; if(num2 % i == 0) num2/=i;
        }else{
            i++;
        }
    }
    printf("LCM: %d",lcm);
}

int main(){
    int num1, num2;
    printf("Enter a number: ");
    scanf("%d", &num1);
    printf("Enter another number: ");
    scanf("%d", &num2);

    findGCD(num1, num2);
    findLCM(num1, num2);
}


