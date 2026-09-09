#include<stdio.h>
#include<stdlib.h>


struct  Student
{
    int roll;
    char name[30];
};



int main()
{
    int n;
    printf("Please Enter the total number of student you want to manage\n");
    scanf("%d" , &n);
    struct  Student *p = malloc(n*sizeof(struct Student));
    struct Student *head = p;

    for(int i = 0; i < n; i++)
    {
        int roll;
        printf("Enter the roll number\n");
        scanf("%d" , &roll);
        printf("Enter the name of student\n");
         // Consume the leftover newline
        getchar();
        fgets(p->name , 30 , stdin);
        p->roll = roll;
        p++;
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d Name: %s  Rollno: %d\n" , i+1 , head->name , head->roll);
        head++;
    }


}