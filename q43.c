// String function replication: strrev()

#include<stdio.h>

int main(){

    int n, size=0;
    printf("Enter size of string (Number of characters): ");
    scanf("%d", &n);

    char str[n+1];
    printf("Enter the string: ");
    scanf(" %[^\n]", str);  

    for (int i = 0; i < n; i++)
    {
        if(str[i]=='\0'){
            break;
        }
        size++;
    }

    char revStr[size+1];
    for(int i =size-1, j=0; i>=0;i--, j++){
        revStr[j] = str[i];
    }
    revStr[size]='\0';

    printf("%s\n", revStr);

    printf("%d", size);
    return 0;
    
}