Write a C Program to read a 2D Array and then display it.
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{      
    int AR[100][100],i,j,p,q;
    scanf("%d", &p);
    scanf("%d",&q);
    for (i=0;i<p;i++)
        {
            for (j=0;j<q;j++)
            {
             scanf("%d",&AR[i][j]);
            }    
    }
      for (i=0;i<p;++i)
        {
         for (j=0;j<q;++j)
          {
            printf("%d ",AR[i][j]);
          }
        printf("\n");
    }
   return 0;
}
    
       
