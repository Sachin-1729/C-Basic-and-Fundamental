#include<stdio.h>

char findFirstNonRepeatingChar(char a[])
{
    int i = 0;
    while(a[i] != '\n' && a[i] != '\0')
    {
        int j = 0;
        int count = 0;
        while(a[j] != '\n' && a[j] != '\0')
        {
               if(a[i] == a[j])
               {
                count++;
               }
               j++;
        }

        if(count == 1)
        {
            return a[i];
        }
        i++;
    }
    return ' ';
}

int main()
{
    char a[2000];
   printf("Enter the string\n");
   fgets(a , 2000 , stdin);

  char ans = findFirstNonRepeatingChar(a);
  printf("First Non Repeating Char is %c\n" , ans);

}