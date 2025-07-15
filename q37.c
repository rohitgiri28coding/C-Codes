// Count number of lines, words and characters in a file.

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){
    FILE *fptr = fopen("xyz.txt", "r");

    if (fptr == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }

    int inWord = 0,lastCharWasNewline=0;
    int characters = 0, words = 1, lines = 0;

    char str[50], ch;

    while((ch = fgetc(fptr)) != EOF){
        characters++;

        if (ch == '\n') {
            lines++;
            lastCharWasNewline = 1;
        } else {
            lastCharWasNewline = 0;
        }
        if(isspace(ch)){
            inWord=0;
        }else if (!inWord){
            inWord=1;
            words++;
        }


    }

    // Add 1 more line if the last line didn’t end with newline
    if (characters > 0 && !lastCharWasNewline) {
        lines++;
    }

    printf("Characters: %d\n", characters);
    printf("Words:      %d\n", words);
    printf("Lines:      %d\n", lines);

    fclose(fptr);

    printf("The file is now closed.");
    
}
