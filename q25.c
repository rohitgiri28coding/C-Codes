// Count frequency of each character in a string.

#include<stdio.h>
#include<string.h>


int main(){

    char name[] = "ARA_PATNA";

    int length = sizeof(name)/sizeof(name[0]);

    char temp[length], occurrencesChar[length];

    int occurrencees[length-1];
    strcpy(temp, name);

    for (int i = 0; i < length-1; i++){
        char ch = temp [i];
        int count = 1;
        for(int j = i+1;j<length-1;j++){
            if (ch == temp[j]){
                count++;
                for(int k = j;k<length-1;k++){
                    temp[k]=temp[k+1];
                }
                length--;
            }
        }
        occurrencesChar[i] = ch;
        occurrencees[i] = count;
    }
    length = sizeof(occurrencesChar)/sizeof(occurrencesChar[0]);
    for(int i = 0; i<length;i++){
        if(occurrencesChar[i]=='\0'){
            break;;
        }
        printf("%c -> %d\n", occurrencesChar[i], occurrencees[i]);
    }
}



// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str[] = "ARA_PATNA";
//     int freq[256] = {0};  // Frequency array for all ASCII characters

//     // Count frequencies
//     for (int i = 0; str[i] != '\0'; i++) {
//         freq[(unsigned char)str[i]]++;
//     }

//     printf("Character frequencies:\n");

//     // Display frequencies (only for characters that appear)
//     for (int i = 0; str[i] != '\0'; i++) {
//         if (freq[(unsigned char)str[i]] != 0) {
//             printf("%c -> %d\n", str[i], freq[(unsigned char)str[i]]);
//             freq[(unsigned char)str[i]] = 0;  // Avoid duplicate printing
//         }
//     }

//     return 0;
// }
