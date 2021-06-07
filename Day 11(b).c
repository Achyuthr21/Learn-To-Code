myarray[10] ={10,25,8,14,3,23,1,0,12,9} 
Write a C program to
1) Print the value of 4th element.
2) Print the value of last element in the array.
3) Change the value of third element to 30 and print the new value.
4) Print all the elements stored in the new array.
  
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
   int myarray[11] ={10,25,8,14,3,23,1,0,12,9};
    int i;
    
   
    for( i=0;i<10;i++)
    {
        scanf("%d", &myarray[i]);
    }
    printf("%d", myarray[3]);
    printf("\n%d",myarray[9]);
    printf("\n%d\n",myarray[i]=30);
    for(i=0;i<10;i++)
 {
      if(myarray[i]==8)  
      {
          myarray[i]=30;
      }
        
    }
       
   for( i=0;i<10;i++)
   {
    
       printf("%d ", myarray[i]);
   }

    
    return 0;
}
