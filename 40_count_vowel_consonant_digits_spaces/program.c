#include<stdio.h>

int main()
{
   int vowel = 0;
   int digit = 0;
   int consonant = 0;
   int spaces = 0;

   char a[2000];
   printf("Enter the string you want to check\n");
   fgets(a , 2000 , stdin);
   int i = 0;
   while(a[i] != '\0')
   {
     char ch = a[i];

    if (ch >= '0' && ch <= '9')
    {
        digit++;
    }
else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
         ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        vowel++;
    }
else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        consonant++;
    }
else if(ch == ' ')
{
     spaces++;

}

i++;
   }

   printf("Vowel: %d\n", vowel);
   printf("Consonant: %d\n", consonant);
   printf("Spaces: %d\n", spaces);
   printf("Digit: %d\n", digit);




   
}