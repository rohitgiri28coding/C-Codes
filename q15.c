// Check if a number is palindrome using a function.

#include <stdio.h>

void isPalindrome(int num){
    int temp=num, rev=0;

    while(temp!=0){
        rev = (rev*10) + (temp%10);
        temp/=10;
    }
    if(num == rev){
        printf("Entered number \'%d\' is a palindrome.", num);
    }else{
        printf("Entered number \'%d\' is not a palindrome.", num);
    }
}

int main(){
    int num;
    while(1){
        printf("Enter a number for checking palindrome or not: ");
        scanf("%d", &num);

        if(num>=0){
            isPalindrome(num);
            return 0;
        }else{
            printf("Please enter a whole number.\n");
        }
    }
}