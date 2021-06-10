Write a C program to find the minimum and maximum element of an array.
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int i,n,Arr[1000],Min,Max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&Arr[i]);
    }
 
    Min=Max=Arr[0];
    for(i=1;i<n;i++)
    {
     if(Min>Arr[i])
      {
         Min=Arr[i]; 
      }
     if(Max<Arr[i])
      {
         Max=Arr[i]; 
      }
    }
     printf("%d\n",Min);
     printf("%d",Max);
 
  return 0;
}
