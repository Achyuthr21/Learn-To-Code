Write a C program to count and display the number of Vowels, Consonants and spaces in a string
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    char string[100];
    int vow,cons,space;
    vow=cons=space=0;
    fgets(string,sizeof(string),stdin);

    for (int i = 0; string[i] != '\0'; ++i) 
    {
        if (string[i]=='a'||string[i]=='A'||string[i]=='e'||string[i]=='E'||string[i]=='i'||string[i]=='I'||string[i]=='o'||string[i]=='O'
            ||string[i]=='u'||string[i]=='U') 
        {
            ++vow;
        } 
        else if((string[i]>='a'&&string[i]<='z')||(string[i]>='A'&&string[i]<='Z')) 
        {
            ++cons;
        
        } 
        else if(string[i]==' ') 
        {
            ++space;
        }
    }

    printf("%d",vow);
    printf("\n%d",cons);
    printf("\n%d",space);
    return 0;
}
    

