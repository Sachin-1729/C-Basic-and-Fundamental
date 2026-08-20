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

void removeElementAtanyIndex(int *arr , int i, int *n)
{
    for(int index = i; index < *n-1; index++)
    {
         arr[index] = arr[index+1];
    }
    *n = *n - 1;
    
}

void removeDuplicateElement(int *arr , int *n)
{
    for(int i = 0; i < *n; i++)
    {
        for(int j = i+1; j < *n; j++)
        {
           if(arr[i] == arr[j])
           {
              // Delete j position element
              removeElementAtanyIndex(arr , j , n);
              j--;
           }
        }
    }
}



int main()
{
    printf("Enter the size of the array\n");
    int size;
    scanf("%d" , &size);
    int *arr = createArray(size);
    removeDuplicateElement(arr , &size);
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
}


