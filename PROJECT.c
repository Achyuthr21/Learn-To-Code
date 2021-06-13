C Program to create a library database to enter the details of a book and display the number of entries and details in the database.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct libdatabase 
{
   char Name[50];
   char author[50];
   int pages;
   float price;
};

int main()
{
   struct libdatabase lib[100];
   char Name[50];
   int i,j,count;
   i=j=count=0;
   while(j!=6)
  {
      printf("\n1.Include book information\n");
      printf("2.Display book information\n");
      printf("3.No of books in the library\n");
      printf("4.Exit");
      printf ("\nSelect number from Menu : ");
      scanf("%d",&j);
      switch (j)
       {
         case 1:
            printf ("Enter book name = ");
            scanf ("%s",lib[i].Name);
            printf ("Enter author name = ");
            scanf ("%s",&lib[i].author);
            printf ("Enter pages = ");
            scanf ("%d",&lib[i].pages);
            printf ("Enter price = ");
            scanf ("%f",&lib[i].price);
            count++;
            i++;
            break;
         case 2:
            for(i=0; i<count; i++)
            {
               printf ("book name= %s\n",lib[i].Name);
               printf ("author name= %s\n",lib[i].author);
               printf ("pages= %d\n",lib[i].pages);
               printf ("price= %f\n",lib[i].price);
            }
            break;
         case 3:
            printf("\n No of books in library : %d",count);
            break;
         case 4:
            exit (0);
        default:
        printf("Invalid Option");
      }
  }
   return 0;
}
