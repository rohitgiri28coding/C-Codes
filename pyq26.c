// 2022 q6

#include<stdio.h>
#define I char

int main(){
    int *j;
    {
        int i = 0;
        j = &i;
    }
    printf("%d", *j);
}

// OUTPUT: 0