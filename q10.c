// Check whether a year is a leap year or not.

#include<stdio.h>

int isLeapYear(int year){
    if(year%4==0){
        if(year%100==0&&year%400!=0)
            return 0;
        return 1;
    }
   
    return 0;
}

int main(){
    int year;
    printf("Enter a year (in YYYY format): ");
    scanf("%d", &year);
    if(isLeapYear(year)){
        printf("Entered year \'%d\' is a leap year.", year);
    }else{
        printf("Entered year \'%d\' is not a leap year.", year);
    }
}