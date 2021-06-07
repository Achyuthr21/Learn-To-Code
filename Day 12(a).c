Write a C program to check whether a number present in the 1D array or not.
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    
    int size,i, toSearch, found;
    scanf("%d", &size);
    
    int arr[size];
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &toSearch);
    found = 0; 
    
    for(i=0; i<size; i++)
    {
       if(arr[i] == toSearch)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        printf("%d is present in this array",toSearch);
    }
    else
    {
        printf("%d is not present in this array",toSearch);
    }
   
    return 0;
}
    
    
