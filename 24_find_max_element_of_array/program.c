#include<stdio.h>
#include<limits.h>
#include <stdlib.h>


int max(int *p , int n)
{
        int mini = INT_MIN;
      for(int i = 0; i < n; i++)
      {
        if(p[i] > mini)
        {
            mini = p[i];
        }
      }

      return mini;

}


int main()
{

    int n;
    printf("Enter the size of array you want, Be postive\n");
    scanf("%d" , &n);
    int *p = malloc(n*sizeof(int));
    if(p == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for(int i = 0; i < n; i++)
    {
        int getNumber;
        printf("Enter the %d element of the array\n", i+1);
        scanf("%d", &getNumber);
        p[i] = getNumber;
    }

    printf("The maximumn element of the array is %d\n" , max(p , n));




}