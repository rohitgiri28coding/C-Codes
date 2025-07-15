// Merge contents of two files into a third.

#include<stdio.h>

int main(){
    FILE *fptr1 = fopen("xyz.txt", "r");
    FILE *fptr2 = fopen("abc.txt", "r");
    FILE *merged = fopen("merged.txt", "w");

    if (fptr1 == NULL || fptr2 == NULL || merged == NULL) {
        printf("Error opening one of the files.\n");
        return 1;
    }

    char ch;

    // Copy contents of file1
    while ((ch = fgetc(fptr1)) != EOF) {
        fputc(ch, merged);
    }

    // Copy contents of file2
    while ((ch = fgetc(fptr2)) != EOF) {
        fputc(ch, merged);
    }

    printf("Files merged into 'merged.txt'.\n");

    fclose(fptr1);
    fclose(fptr2);
    fclose(merged);
    return 0;
}