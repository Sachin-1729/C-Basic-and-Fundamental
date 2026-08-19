#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d" , &n);

    int *p = malloc(n*sizeof(int));
    for(int i = 0; i < n; i++)
    {
       int number;
       printf("Enter the array element\n");
       scanf("%d" , &number);
       p[i] = number;

    }

    int evencount = 0;
    int oddcount = 0;

    for(int i = 0; i <n; i++)
    {
        if(p[i] %2 == 0)
        {
            evencount++;
        }
        else{
            oddcount++;
        }
    }

    printf("Odd count is %d\nEven Count is %d\n", oddcount ,evencount);
    free(p);
}