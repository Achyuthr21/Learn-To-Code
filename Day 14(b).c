Write a C Program to read the values for a square 2D array and print its main/principal and secondary diagonals.
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int AR[30][30],i,j,m,k;
     scanf("%d",&m);
     scanf("%d",&k);
       
    for(i=0;i<m;i++)
      {
        for(j=0;j<k;j++)
          {
             scanf("%d",&AR[i][j]);
          }
      }

    if(m==k)
    {
        for(i=0;i<m;i++)
         {
          for(j=0;j<k;j++)
            {
              if(i==j)
              {
                  printf("%d ",AR[i][j]); 
              }
                    
            }
              
         }
            printf("\n");
    
        
     for (int i=0;i<k;i++) 
        {
         for (int j=0;j<k;j++)
          {
           if ((i+j)==(k-1))
            {
              printf("%d ",AR[i][j]);
            }
          }
        }
    }
    
    if(m!=k)
      {
        printf("ERROR");
      }
    
    return 0;
}  
    
    
    
