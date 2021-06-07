#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
            char sentence[100];
            
            gets(sentence);
            for(int i=0;sentence[i]!='\0';i++)
            {if((sentence[i]>='A')&&(sentence[i]<='Z'))
            {sentence[i]=sentence[i]+32;
            }
            else if(sentence[i]>='a'&&sentence[i]<='z')
            {sentence[i]=sentence[i]-32;}}
            puts(sentence);
            return 0;
}Write a C program to change the case of alphabets.
  
