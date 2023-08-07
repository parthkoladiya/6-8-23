#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[20];
clrscr();
 printf("ENTER YOUR NAME::");
 scanf("%s",&name);
 printf("%s",strupr(name));

getch();
}