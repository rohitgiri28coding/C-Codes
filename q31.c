// Create a structure to store student details (name, roll, marks) and print it.
// Pass structure to a function and update marks.

#include <stdio.h>
#include<string.h>

struct student
{
    char name[50];
    int roll;
    int marks;
}s1, s2;

void updateMarks(struct student s, int marks){
    s.marks = marks;
}
int main(){
    strcpy(s1.name, "Rohit");
    s1.roll = 19;
    s1.marks = 100;

    strcpy(s2.name, "Anirvan");
    s2.roll = 12;
    s2.marks = 80;


    printf("Name: ");
    for(int i = 0; s1.name[i] != '\0';i++){
        printf("%c", s1.name[i]);
    }
    printf("Roll: %d", s1.roll);
    printf("Marks: %%", s1.marks)
;}