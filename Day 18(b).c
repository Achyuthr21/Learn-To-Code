#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int a,b,rev=0,remnd,k= 0;
    int c;
    scanf("%d %d",&a,&b);
    c=a+b;
    scanf("%d",&c);
    printf("%d",c);    
  
    
    if(c%2==0)
    {
    while(c!=0)    
  {    
     remnd=c%10;    
     rev=rev*10+remnd;    
     c/=10;    
  }    
  printf("\n%d",rev);
    }
     else
  {
     k = 0;
 
for (int i = 2; i <= c / 2; ++i) 
  {
   
    if (c% i == 0) 
    {
      k = 1;
      break;
    }
  }

   if (k== 0)
      {
          printf("\nPrime");
      }
         else
         {
             printf("\nNot prime");
         }
    
}   
    return 0;
}Write a C program to input two numbers.If sum of the numbers is even, find the reverse of the sum .If sum is odd check whether the sum is prime or not.
  
