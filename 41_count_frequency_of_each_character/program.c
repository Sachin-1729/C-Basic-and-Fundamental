#include<stdio.h>

int main()
{
    char a[2000];
   int visited[256] = {0};

    printf("Enter the string you want to find the frequency of its character\n");
    fgets(a , 2000 , stdin);
    int i = 0;
  
    while(a[i] != '\0')
    { 
        int count = 0;
          int j = 0;
          
        int character = (int)a[i];
         if (a[i] == '\n')
        {
            i++;
            continue;
        }

          if(visited[character] == 1)
          {
            i++;
            continue;
          }
        
        while(a[j] != '\0')
        {
            if(a[i] == a[j])
            {
                count++;

            }
            j++;
        }
        visited[character] = 1;
        printf("Frequency of %c : %d\n" , a[i] , count);
        i++;
       
    }

}