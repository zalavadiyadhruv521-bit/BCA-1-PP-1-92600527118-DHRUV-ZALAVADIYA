#include <stdio.h>
#include <conio.h>

void main()
{
	int h;
	clrscr();

	printf("enter the age : ");
	scanf("%d",&h);

	if (h >= 18)
	printf("person is eligible");
	else
	printf("person is not eligible");

	getch();
}