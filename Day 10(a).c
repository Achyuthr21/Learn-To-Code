The Fibonacci Series is a mathematical series that starts with 0 and 1 and is generated by adding the two preceding numbers to generate the next one.Write a C program to 
print the above series starting from 0 and the upperlimit is determined by the user
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i, n, t1 = 0, t2 = 1;
    int nextTerm;
    
    scanf("%d", &n);
    printf("%d %d", t1, t2);
   
    for (i = 1; i <= n-2; ++i) 
    {
        nextTerm=t1+t2;
        printf(" %d", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        
    }

    return 0;
}

  
