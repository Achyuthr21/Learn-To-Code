Write a C program to check whether a given number is amstrong or not.
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{

     int no,realnum,rem,result=0;
     scanf("%d",&no);
     realnum=no;
 
    while(realnum!=0) 
    {
        rem= realnum%10;
        result+=rem*rem*rem;
        realnum/= 10;
    }

    if(result==no)
    {
        printf("Amstrong");
    }
    else
    {
        printf("Not Amstrong");
    }
    return 0;
}
