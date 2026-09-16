#include<stdio.h>
#include<stdlib.h>



void bubbleSort(int *a , int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j < n; j++)
        {
            if(a[j] < a[j-1])
            {
               int temp = a[j];
               a[j] = a[j-1];
               a[j-1] = temp;
            }
        }
    }
}

int main()
{
    printf("Enter the size of the Array\n");
    int n;
    scanf("%d" , &n);
    int *p = malloc(n*sizeof(int));
    printf("Enter the element\n");
    for(int i = 0; i < n; i++)
    {
       scanf("%d" , &p[i]);
    }
    bubbleSort(p , n);
    for(int i = 0; i < n; i++)
    {
        printf("%d " , p[i]);
    }


}