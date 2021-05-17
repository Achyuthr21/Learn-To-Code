WACP to accept marks of three subjects..Calculate the percentage and respective grade according to following: Percentage >= 90% : Grade A Percentage >= 80% : Grade B Percentage >= 70% : Grade C Percentage >= 60% : Grade D Percentage >= 40% : Grade E Percentage < 40% : Grade F
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int sub1,sub2,sub3; 
    float percentage; 
    scanf("%d%d%d", &sub1,&sub2,&sub3);
    
    percentage = (sub1+sub2+sub3)/ 3.0;
    
    if(percentage >= 90)
    {
       printf("%.2f\n", percentage); 
        printf("A");
    }
    else if(percentage >= 80)
    {
        printf("%.2f\n", percentage);
        printf("B");
    }
    else if(percentage >= 70)
    {
        printf("%.2f\n", percentage);
        printf("C");
    }
   
    else if(percentage >= 60)
    {
        printf("%.2f\n", percentage);
        printf("D");
    }
    else if(percentage >= 40)
    {
        printf("%.2f\n", percentage);
        printf("E");
    }
    else
    {
        printf("%.2f\n", percentage);
        printf("F");
    }



    return 0;
}
