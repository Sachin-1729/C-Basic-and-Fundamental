#include<stdio.h>
#include<stdlib.h>


void reverse(char *p , int n)
{
    int start = 0;
    int end = 0;
    while(p[end] != '\0' && p[end] != '\n')
    {
        end++;
    }
    end = end -1;
    while(start < end)
    {
        char temp = p[start];
        p[start] = p[end];
        p[end] = temp;
        start++;
        end--;
    }

   
}

int main()
{
    char a[2000];
    char b[2000];
    printf("Enter your string\n");
    fgets(a , 2000 , stdin);
    int i = 0;
    while(a[i] != '\0')
    {
        b[i] = a[i];
        i++;
    }
    b[i] = '\0';
    reverse(a , 3);
    
    int j = 0;
    while(a[j] != '\0')
    {
        if(a[j] != b[j])
        {
            printf("The given string is not pallindrom\n");
            return 0;
        }
        j++;
    }

    printf("The given string is pallindrom\n");
  
}

