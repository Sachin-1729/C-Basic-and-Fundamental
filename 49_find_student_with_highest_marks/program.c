#include<stdio.h>
#include<stdlib.h>
#include<limits.h>



struct  Student
{
    int roll;
    char name[30];
    int marks;
};



struct Student maximumnMarks(struct Student* student , int n)
{
   int maxi = INT_MIN;
   struct Student s;
   int j = 0;
   for(int i = 0; i < n; i++)
   {
     if(student[i].marks > maxi)
     {
        maxi = student[i].marks;
        j = i;
     }
   }

   return student[j];
}


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
        printf("Enter the roll number of %d student\n" , i+1);
        scanf("%d" , &roll);
        printf("Enter the name of student\n");
         // Consume the leftover newline
        getchar();
        fgets(p->name , 30 , stdin);
        printf("Enter the marks of student\n");
        scanf("%d" , &p->marks);
        p->roll = roll;
        p++;
    }

 

    struct Student answer = maximumnMarks(head , n);
    printf("Rollno: %d\nName: %s\nMarks: %d\n", answer.roll , answer.name , answer.marks);


}