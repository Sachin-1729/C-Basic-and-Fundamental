#include<stdio.h>
#include<string.h>

int main()
{
    char string[] = "Iamdone";
    int index = 0;
    int count = 0;
    while(string[index] != 0)
    {
        count++;
        index++;
    }

    printf("The length of the string is %d\n" , count);
}