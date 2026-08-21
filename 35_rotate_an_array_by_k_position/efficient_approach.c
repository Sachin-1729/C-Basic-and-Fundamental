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

void reverse(int *a , int start, int end)
{ 
    while(start < end)
    {
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
          start++;
          end--;
    }
  

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
    reverse(p , 0 ,k-1);
    reverse(p, k , size-1);
    reverse(p, 0 , size-1);
    #define cout printf

    for(int i =0; i < size; i++)
    {
        cout("%d " , p[i]);
    }
    

    printf("\n");
    free(p);
    return 0;

}