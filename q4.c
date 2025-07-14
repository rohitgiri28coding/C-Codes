// Convert Celsius to Fahrenheit and vice versa.

#include <stdio.h>

int main(){
    int choice = 0;
    double temp = 0.0, convertedTemp = 0.0;
    while (1)
    {
        printf("Enter your choice for entering temperature \nEnter 1 --> To enter temperature in Celsius \nEnter 2 --> To enter temperature in fahrenheit\n");
        scanf("%d", &choice);
        if(choice==1|| choice==2){
            break;
        }else{
            printf("Please enter a valid choice.\n");
        }
    }
    printf("Enter temperature: ");
    scanf("%lf", &temp);

    if (choice==1)
    {
        convertedTemp = ((temp * 9)/5)+32;

        printf("Entered temperature (in Celsius) = %lf\nConverted Temperature (in Fahrenheit) = %lf\n", temp, convertedTemp);

    }else{
        convertedTemp = ((temp - 32)*5)/9;
        printf("Entered temperature (in Fahrenheit) = %lf\nConverted Temperature (in Celsius) = %lf\n", temp, convertedTemp);

    }
    return 0;

}
