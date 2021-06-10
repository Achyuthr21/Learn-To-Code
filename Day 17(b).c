Write a C program to print inverted full pyramid of *
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
int i,j,rows;
scanf("%d",&rows);
if(rows>=1)
{
for(i=1;i<=rows;i++)
 {
  for(j=2*rows;j>=i*2;j=j-1)
   {
     printf("* "); 
   }
    printf("\n");
for(j=1;j<=2*i;j++)
  {
    printf(" ");
  }
 }
}
else
 {
    printf("ERROR");
 } 
return 0;
}
