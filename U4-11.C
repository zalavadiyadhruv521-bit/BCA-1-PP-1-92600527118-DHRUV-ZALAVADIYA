#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,i;
	int result = 1;
	clrscr();

	printf("enter x : ");
	scanf("%d",&x);

	printf("enter y : ");
	scanf("%d",&y);

	for(i = 1; i <= y; i++)
	result = result * x;

	printf("%d^%d", x,y,result);

	getch();
}