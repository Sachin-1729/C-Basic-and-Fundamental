#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct Student
{
  int roll;
  int marks;
  char name[30];
};


struct Student* sortStudent(struct Student* student , int n)
{
   for(int i = 1; i < n; i++)
   {
     struct Student temp;
     int j;
    temp = student[i];

     for(j = i - 1; j >= 0; j--)
     {
         if(student[j].marks > temp.marks)
         {
            student[j+1] = student[j];
         }
         else{
            break;
         }
     }

     student[j+1] = temp;
   }
   return student;
}


int main()
{
  printf("Enter the total number of students\n");
  int n;
  scanf("%d" , &n);
  struct Student *p = malloc(n * sizeof(struct Student));


  for(int i = 0; i < n; i++)
  {
    int marks;
    int roll;
    char name[30];
    printf("Enter the roll number of the student\n");
    scanf("%d" , &roll);
    printf("Enter the name of the student\n");
    getchar();
    fgets(name , 30 , stdin);
    printf("Enter the marks of the student\n");
    scanf("%d" , &marks);

    p[i].marks = marks;
    p[i].roll = roll;

    int k = 0;
    char goodName[30];
    
    while (name[k] != '\n' && name[k] != '\0')
    { 
       goodName[k] = name[k]; 
       k++;
    }
    goodName[k] = '\0';
    
    strcpy(p[i].name , goodName);
  }

  struct Student *sorted = sortStudent(p , n);

  for(int i = 0; i < n; i++)
  {
   
    printf("Name: %s\nRollno: %d\nMarks: %d\n", sorted[i].name , sorted[i].roll , sorted[i].marks);


  }
}