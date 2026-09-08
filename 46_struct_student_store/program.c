#include <stdio.h>
#include <string.h>

struct Students
{
    int obtainedMarks;
    int totalMarks;
    char name[20];
    int rollnumber;
};

int main()
{
    struct Students sachin;

    sachin.rollnumber = 12;
    sachin.totalMarks = 321;
    sachin.obtainedMarks = 134;

    printf("Enter name: ");
    fgets(sachin.name, sizeof(sachin.name), stdin);



    printf("Name: %s\n", sachin.name);
    printf("Roll Number: %d\n", sachin.rollnumber);
    printf("Marks: %d/%d\n", sachin.obtainedMarks, sachin.totalMarks);

    return 0;
}