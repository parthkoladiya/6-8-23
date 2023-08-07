#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int i;
  char a[20],b[20];
  clrscr();
  printf("ENTER YOUR ARRAY SIZE==>");
  scanf("%s%s",&a,&b);
  i=strcmp(a,b);
   if(i==0)
   {
     printf("same");
   }
   else
   {
     printf("NOT SAME");
   }
  getch();
}