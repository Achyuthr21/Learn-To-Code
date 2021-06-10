Write a C Program to read a 2D array. Then, search for a particular given element. If found, display each occurrence of that element with its position(s).
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int m,n,Element,count=0;
    scanf("%d %d", &m, &n);
    int Arr[m][n];
    for(int i=0;i<m;i++)
    {
      for(int j=0;j<n;j++)
       {
         scanf("%d",&Arr[i][j]);
       }
    }
       scanf("%d",&Element);

    for(int i=0;i<m;i++)
     {
         for(int j=0;j<n;j++)
          {
            if(Arr[i][j]==Element)
             {
               printf("Element found at (%d,%d)\n",i,j);
                count++;
             }
          }
     }
    if(count==0)
    {
        printf("Element not found");
    }
  return 0;
}



