Write a C program to find the number of words in a string. Also reverse string.
 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    char s[200],r[200];
    int count=0,i,start,end;
 
 
    scanf("%[^\n]s",s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i]== ' '&&s[i+1] != ' ')
            count++;    
    }
     
    printf("no of words = %d\n",count + 1);
    gets(s);
  while(s[count]!='\0')
   {
      count++;
   }
    end=count-1;

   for(start=0;start<count;start++) 
   {
      r[start] = s[end];
      end--;
   }
   r[start] = '\0';
   printf("%s\n", r);
    return 0;
} 
