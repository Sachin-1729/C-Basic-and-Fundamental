#include<stdio.h>

int checkAnagram(char a[] , char b[])
{
     int frequency[256] = {0};
     int i = 0;
     int j = 0;
     while(a[i] != '\0')
     {
        char ch = a[i];
        int r = (int)ch;
        frequency[r]++;
        i++;
     }

     while(b[j] != '\0')
     {
        char ch = b[j];
        int r = (int)ch;
        frequency[r]--;
        j++;
     }

     for(int i = 0; i < 256; i++)
     {
        if(frequency[i] != 0)
        {
            return 0;
        }
     }
     return 1;
}

int main()
{
    char a[200];
    char b[200];
    printf("Enter the first string\n");
    fgets(a, 200 , stdin);
    printf("Enter the second string\n");
    fgets(b , 200 , stdin);

    if(checkAnagram(a , b))
    {
        printf("Anagram\n");
        return 0;
    }

    printf("Not anagram\n");
    return 0;
    

}