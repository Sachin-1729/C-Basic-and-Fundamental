#include<stdio.h>


int main()
{
    printf("Enter the string you want to get read of spaces\n");
    char a[2000];
    fgets(a , 2000 , stdin);
    int read = 0;
    int write = 0;
    while(a[read] != '\0')
    {
        if(a[read] == ' ')
        {
            read++;
      
        }
        else
        {
            a[write] = a[read];
            read++;
            write++;

        }
    }

    int i = 0;
    while (a[i] != '\0')
    {
       printf("%c" , a[i]);
       i++;
    }
    
    


}