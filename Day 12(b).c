Write a C program to find the frequency of odd and even numbers in the 1D array.
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

        int AR[10];
        int i,m,even=0,odd=0;
        scanf("%d", &m);
        for (i=0;i<m;i++)
        {
          {
                 scanf("%d", &AR[i]);
                 if ((AR[i] % 2) == 0)
                 {
                     ++even;
                 }
                 else
                     ++odd;
             }
        }
       printf("%d\n",even); 
       printf("%d\n",odd);
    
  return 0;
}
