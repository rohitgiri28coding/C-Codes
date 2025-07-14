// Print all prime numbers between 1 to N.

#include<stdio.h>

int isPrimeNumber(int num){
    for(int i = 2; i<num; i++){
        if(num%i==0) return 0;
    }
    return 1;
}

void printPrime(int endRange){
    for(int i=2;i<=endRange;i++){
        if(isPrimeNumber(i)){
            printf("%d, ", i);
        }
    }
}

int main(){
    int endRange;
    while (1)
    {
        printf("\nEnter end range for printing prime number: ");
        scanf("%d", &endRange);

        if(endRange<=1){
            printf("\nEntered number is incorrect.");
        }else{
            printPrime(endRange);
            return 0;
        }
    }
    
    

}