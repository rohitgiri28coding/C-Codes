// Compare memory size of struct and union.

#include<stdio.h>

struct student
{
    char name[20];
    int roll;
    int marks;
};

union teachers
{
    char name[20];
    int teachersId;
    int marks;
};

int main(){
    struct student s1;
    union teachers t1;
    size_t unionSize = sizeof(t1);
    size_t structureSize = sizeof(s1);

    printf("Union Size: %zu\n", unionSize);
    printf("Structure Size: %zu", structureSize);
}
