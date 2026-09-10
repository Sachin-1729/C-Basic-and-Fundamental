#include<stdio.h>
#include<stdlib.h>

struct Student{

    int marks[5];
    char name[30];
    int roll;

};

int main()
{
    int totalStudent=0;
    printf("Enter the total Student Capacity\n");
    scanf("%d" , &totalStudent);
    int capacity = totalStudent;
    int studentCount = 0;
    struct Student *p = malloc(capacity * sizeof(struct Student));
   
    while(1)
    {
                for(int i = studentCount; i < capacity; i++)
                {
                    printf("Enter the name of Student\n");
                    // Remove newline left by scanf
                        getchar();
                    fgets(p[i].name , 30 , stdin);
                    printf("Enter the marks of the subject\n");
                    for(int sub = 0;  sub < 5; sub++)
                    {
                        int marks;
                      
                        scanf("%d" , &marks);
                        p[i].marks[sub] = marks;
                    }

                    printf("Enter the roll no.\n");
                    int roll;
                    scanf("%d" , &roll);
                    p[i].roll = roll;
                    studentCount++;
                }
               
               printf("Capacity of the student is full, Please Enter the number of capacity you want to increase\n");
                int extracapity;
                scanf("%d" , &extracapity);

                if(extracapity == 0)
                {
                    break;
                }

                capacity = capacity + extracapity;
                struct Student *temp = realloc(p , capacity*sizeof(struct Student));
                p=temp;
    }

                printf("\n");
                printf("%-8s %-20s %-10s %-10s %-10s %-10s %-10s %-10s %-10s\n",
                    "Roll",
                    "Name",
                    "Sub1",
                    "Sub2",
                    "Sub3",
                    "Sub4",
                    "Sub5",
                    "Total",
                    "Average");

                printf("---------------------------------------------------------------------------------------------\n");

                for (int i = 0; i < studentCount; i++)
                {
                    int totalMarks = 0;

                    for (int j = 0; j < 5; j++)
                    {
                        totalMarks += p[i].marks[j];
                    }

                    float avg = totalMarks / 5.0;

                    printf("%-8d %-20s ", p[i].roll, p[i].name);

                    for (int j = 0; j < 5; j++)
                    {
                        printf("%-10d ", p[i].marks[j]);
                    }

                    printf("%-10d %.2f\n", totalMarks, avg);
                }

          free(p);

}