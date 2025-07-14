// Implement a simple calculator using switch.

#include <stdio.h>

int main(){
    double num1, num2, res;
    int choice=0;
    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);

    while (1)
    {
        printf("\nEnter your choice for performing calculation \nEnter 1 --> To perform addition \'+\' \nEnter 2 --> To perform subtraction \'-\' \nEnter 3 --> To perform multiplication \'*\' \nEnter 4 --> To perform division \'/\' \nEnter any other number to exit.\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            res = num1 + num2;
            printf("\n%.2lf + %.2lf = %.2lf\n", num1, num2, res);
            break;
        case 2:
            res = num1 - num2;
            printf("\n%.2lf - %.2lf = %.2lf\n", num1, num2, res);
            break;
        case 3:
            res = num1 * num2;
            printf("\n%.2lf * %.2lf = %.2lf\n", num1, num2, res);
            break;
        case 4:
            if(num2 == 0){
                printf("\nDivisor cannot be zero.\n");
                break;
            }
            res = num1 / num2;
            printf("\n%.2lf / %.2lf = %.2lf\n", num1, num2, res);
            break;
        
        default:
            printf("\nEnding calculator program.");
            return 0;
        }
    }
    return 0;
}