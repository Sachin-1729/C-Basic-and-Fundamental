#include<stdio.h>
#include<stdlib.h>


int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d" , &n);

    int *p = malloc(n*sizeof(int));

    printf("Enter the element of the array\n");

    for(int i = 0; i < n; i++)
    {
        scanf("%d" , &p[i]);
    }

    int key;
    printf("Enter the element you want to search\n");

    scanf("%d" , &key);

    for(int i = 0; i < n; i++)
    {
        if(p[i] == key)
        {
            printf("The search key is present at %d position\n" , i+1);
            return 0;
        }
    }

    printf("Not found\n");
    return 0;

    


}