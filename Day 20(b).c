Write a C program to find the second maximum element in an array of integer elements
#include<stdio.h>
#include<limits.h>
 
int main()
{
  int n,array[20];
  scanf("%d",&n);
  int larg=INT_MIN;
  int seclarg=INT_MIN;
    for(int i=0;i<n;i++)
     {
    scanf("%d",&array[i]);
     }
    for(int i=0;i<n;i++)
    {
     if(array[i]>larg)
      {
      seclarg=larg;
      larg=array[i];
      }
    else if((array[i]<larg)&&(array[i]>seclarg))
     {
      seclarg=array[i];
     }
    }
 
  printf("%d",seclarg);
 
  return 0;
}
