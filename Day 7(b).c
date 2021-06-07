Write a C Program to display a calculator with a menu consisting of each operation to perform on the numbers using Switch Case statement.
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
    
{
    int ch,a,M;
    float b;
            scanf("%d",&ch);
            scanf("%d%f",&a,&b);
            printf("1.Addition");
            printf("\n2.Subtraction");
            printf("\n3.Multiplication");
            printf("\n4.Division");
            
        switch(ch)
            {
                case 1:
                    {
                      M=a+b;
                      printf("\n%d",M);
                      break;
                    }
                case 2:
                    {
                      M=a-b;
                      printf("\n%d",M);
                      break;
                    }
                case 3:
                    {
                      M=a*b;
                      printf("\n%d",M);
                      break;
                    }
                case 4:
                    {
                        float D;
                        if(b==0)
                         {
                            printf("\nCannot be determined");
                         }
                        else
                         {  
                            D=a/b;
                            printf("\n%.1f",D);
                         }
                      break;
                    }
            }
                 
           return 0;
}
