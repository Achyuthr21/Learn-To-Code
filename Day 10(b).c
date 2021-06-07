Write a C program to print the Roots of a Quadratic Equation of the form ax^2+bx+c
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    double a,b,c,root1,root2,detmnt ;
 
    scanf("%lf %lf %lf",&a,&b,&c);

    detmnt=(b*b)-4*a*c;

   
    if (detmnt> 0) 
    {
        root1 =(-b + sqrt(detmnt)) / (2 * a);
        root2 =(-b - sqrt(detmnt)) / (2 * a);
        printf("Distinct Real : %.2lf , %.2lf",root1,root2);
    }

  
    else if(detmnt==0) 
    {
        root1=root2=-b /(2*a);
        printf("Equal Real: %.2lf , %.2lf",root1,root2);
    }

    else 
    {
       root1=-b /(2 * a);
       root2 = sqrt(-detmnt)/(2 * a);
       printf("Complex: %.2lf + i%.2lf , %.2f - i%.2f",root1,root2,root1,root2);
    }

    return 0;
}
