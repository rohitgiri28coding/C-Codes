// #Prime Numbers

#include<stdio.h>

int main(){
    int num;

    printf("\n******Prime number Checker*******\n\n");
    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        if(num>=0){
            if(num ==0||num==1){
                printf("\n0 & 1 are neither prime nor composite.");
                return 0;
            }
            break;
        }
        printf("Enter a valid input!\n");
    }


    for(int i =2; i<num;i++){
        if(num%i==0){
            printf("\n\"%d\" is a composite number.", num);
            return 0;
        }
    }

    printf("\n\"%d\" is a prime number.", num);
    return 0;
}