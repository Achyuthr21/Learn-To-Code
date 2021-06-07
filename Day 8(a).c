Write a C Program to identify if a number is a palindrome or not.
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
  int n, revN = 0, remainder, realN;
    scanf("%d", &n);
    realN = n;

   
    while (n != 0) 
    {
        remainder = n % 10;
       revN = revN * 10 + remainder;
        n /= 10;
    }

    if (realN == revN)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
