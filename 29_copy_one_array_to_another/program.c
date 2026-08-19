#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    printf("Enter the size of Array\n");
    scanf("%d" , &n);
    int *p = malloc(sizeof(int)*n);
    int *q = malloc(sizeof(int)*n);
    int *c = q;
    int *r = q;

    for(int i = 0; i < n; i++)
    {
        printf("Enter your element\n");
        int number;
        scanf("%d", &number);
        p[i] = number;
    }

    for(int i = 0; i <n; i++)
    {
        *q = p[i];
        q++;

    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", *c);
        c++;
    }
    printf("\n");
    free(p);
    free(r);

}