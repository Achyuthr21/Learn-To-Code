Write a C Program to display the product of two 2D arrays. Given values for both the 2D Arrays.
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
  int i,j,a,b,c,d,k,sum=0;
  int matrix1[10][10],matrix2[10][10],product[10][10];
 
  scanf("%d %d",&a,&b);
  for (i=0;i<a;i++)
  { 
   for (j=0;j<b;j++)
   {
      scanf("%d",&matrix1[i][j]);
   }
  }    
 
  scanf("%d %d",&c,&d);
 
  if (b==c)
   {
      for (i=0;i<c;i++)
      {
       for (j=0;j<d;j++)
       {
        scanf("%d",&matrix2[i][j]);
       }
      }
 
      for (i=0;i<a;i++) 
      {
       for (j=0;j<d;j++) 
       {
        for (k=0;k<c;k++) 
        {
          sum=sum + (matrix1[i][k]*matrix2[k][j]);
       }
        product[i][j] =sum;
        sum=0;
       }
     }
   for(i=0;i<a;i++)
    {
      for(j=0;j<d;j++)
      {
        printf("%d ",product[i][j]);
      }
      printf("\n");
    }
  } 
  
   else
      {
       printf("ERROR\n");
      } 
   
 return 0;
}


