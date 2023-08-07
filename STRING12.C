#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int i;
  char lowerLetter,UpperLetter;
  clrscr();
    for(lowerLetter = 'a';lowerLetter<= 'z' ;lowerLetter++)
    {
      printf("%c:%d\n",lowerLetter,lowerLetter);
    }
    for(UpperLetter = 'A';UpperLetter <= 'Z';UpperLetter++)
    {
     printf("%c:%d\n",UpperLetter,UpperLetter);
    }
    getch();
}