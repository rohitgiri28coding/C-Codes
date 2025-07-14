// Write a program to count number of 1s in binary representation of a number.

#include <stdio.h>

int count1sInBinary(long num){
    int count =0;
    while (num!=0){
        if(num%10==1){
            count++;
        }
        num/=10;
    }
    return count;
}

int checkIsBinary(long num){
    while (num!=0){
        if(!(num%10==1||num%10==0)){
            return 0;
        }
        num/=10;
    }
    return 1;
}

int main(){
    long num;
    printf("Enter a number in binary: ");
    scanf("%ld", &num);

    if(checkIsBinary(num)){
        printf("Numer of 1s in binary number %ld is %d", num, count1sInBinary(num));
    }else{
        printf("Entered number is not a binary number.");
    }
}