#include<stdio.h>
#include<stdlib.h>

int * createArray(int n)
{
      int *p = malloc(n*sizeof(int));
      for(int i = 0; i < n; i++)
      {
        int element;
        printf("Enter the element of the array\n");
        scanf("%d", &element);
        p[i]=element;
      }

      return p;

}



int main()
{
    printf("Enter the size of the array\n");
    int size;
    scanf("%d" , &size);
    int *p = createArray(size);
    int rotation;
    printf("Enter the number of time you want to rotate the array\n");
    scanf("%d" , &rotation);
    printf("We have rotated the array by %d position left\n" , rotation);
    int k = (rotation % size);
    while( k!= 0)
    {
         int firstElement = p[0];
        for(int i = 0; i < size-1; i++)
        {
            p[i] = p[i+1];
        }
        p[size-1] = firstElement;
        k--;


    }
   
    for(int i = 0; i < size; i++)
    {
        printf("%d ", p[i]);
    }

    printf("\n");
    free(p);
    return 0;

}