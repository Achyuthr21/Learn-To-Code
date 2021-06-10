Write a C Program to read an array, then display the array twice. Once using the index, and the other time using the array pointer.
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
int AR[100],i,n;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
    scanf("%d ",&AR[i]);
}
    printf("DISPLAYING USING INDEX: ");
for(i=0;i<n;i++)
{
    printf("%d ",AR[i]);
}
printf("\nDISPLAYING USING POINTERS: ");

for(i=0;i<n;i++)
{
    printf("%d ",*(AR+i));
}
return 0;
}
