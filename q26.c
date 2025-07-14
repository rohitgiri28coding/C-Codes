// Find the longest word in a sentence.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){

    char str[] = "Hey, this is Rohit! Alkazam";

    int length = sizeof(str)/sizeof(str[0]);

    int maxLen = 0, currLen = 0;
    int start = 0, maxStart = 0;

    for(int i = 0; i<length-1;i++){
        if(isalpha(str[i])){
            if(currLen == 0) start = i;
            currLen++;
        }else{
            if(currLen>maxLen){
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
        }
    }
    if(currLen>maxLen){
        maxLen = currLen;
        maxStart = start;
    }

    printf("Longest word: ");

    for (int i = maxStart; i<maxLen+maxStart;i++){
        printf("%c", str[i]);
    }
    
    return 0;
}

