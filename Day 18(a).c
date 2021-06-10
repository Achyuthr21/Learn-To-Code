Write a C program to swap the values of two variables.
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
void swap(int *x,int *y)
{
    int X=*x;
    *x =*y;
    *y =X;
}
  
int main()
{
    int a,b;
  
    scanf("%d",&a);
    scanf("%d",&b);
    swap(&a,&b);
    printf("a=%d b=%d\n",b,a);
    printf("a=%d b=%d",a,b);
    return 0;
}
