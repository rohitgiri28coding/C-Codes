// Remove all vowels from a string.

#include<stdio.h>
#include <ctype.h>

int main(){

    char name[] = "ARA_PATNA";

    int length = sizeof(name)/sizeof(name[0]);

    for(int i = 0; i < length-1; i++){
        char ch = tolower(name[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            for(int j = i;j<length-1;j++){
                name[j]=name[j+1];
            }
            length--;
            i--; // Recheck current position

        }
    }

    for(int i = 0;i<length;i++){
        printf("%c", name[i]);
    }

}
