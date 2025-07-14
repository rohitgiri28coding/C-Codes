// Implement a function to print Fibonacci series up to N terms.

#include<stdio.h>

void printFibonacci(int endRange){
    int num =1, nextNum=1;
    for(int i=1;i<=endRange;i++){
        printf("%d, ",num);
        int temp = num;
        num=nextNum;
        nextNum+=temp;
    }
}

int main(){
    int endRange;
    while (1)
    {
        printf("\nEnter end range for printing prime number: ");
        scanf("%d", &endRange);

        if(endRange<1){
            printf("\nEntered number is incorrect.");
        }else{
            printFibonacci(endRange);
            return 0;
        }
    }

}