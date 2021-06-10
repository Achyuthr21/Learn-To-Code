Write a C program to print half pyramid of numbers
include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   int i,j,m;
   scanf("%d",&m);
   if(m<1)
   {
       printf("ERROR");
   }
    else
    {
    for(i=1;i<=m;++i) 
   {
      for(j=1;j<=i;++j) 
      {
        printf("%d ",j);
      }
      printf("\n");
   }
}
   return 0;
}



