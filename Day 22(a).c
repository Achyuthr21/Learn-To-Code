Write a C program to find the number of prime numbers in a array of integers
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
int AR[100],n,count,i,j,b;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&AR[i]);
         }
    count=0;
  for(i=0;i<n;i++)
    {
    b=0;
     for(j=2;j<AR[i];j++)
       {
         if(AR[i]%j==0)
          {
              b=1;
                break;
          }
       }
         if(b==0)
          {
            count++;
          }
    }
     printf("%d",count);
   
    return 0; 
}
