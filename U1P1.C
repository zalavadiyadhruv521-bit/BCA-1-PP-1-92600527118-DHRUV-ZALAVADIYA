 //print hello word
#include<stdio.h>
#include<conio.h>

int main()
{
  int x,y,z;
  clrscr();
  printf("enter the first value : ",x);
  scanf("%d",&x);
  printf("enter the second value : ",y);
  scanf("%d",&y);

  z=x-y;
  printf("%d+%d=%d",x,y,z);
  getch();
  return 0;  x
}