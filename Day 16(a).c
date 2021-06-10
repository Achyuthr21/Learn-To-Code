Write a C Program to arrange the elements in ascending order
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
int main()
    {
     int i,j,p,n,element[50];
     scanf("%d",&n);
     for(i=0;i<n;++i)
     {
         scanf("%d",&element[i]);
     }
        for (i=0;i<n;++i) 
        {
          for (j=i+1;j<n;++j)
            {
              if(element[i]>element[j]) 
                {
                  p=element[i];
                  element[i]=element[j];
                  element[j]=p;
              }
             }
            }
        for(i=0;i<n;++i)
        {
            printf("%d ",element[i]);
 
        }
    return 0;
}
