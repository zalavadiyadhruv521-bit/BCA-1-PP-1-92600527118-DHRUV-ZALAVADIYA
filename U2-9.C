#include <stdio.h>
#include <conio.h>

void main()
{
	int d, h;
	clrscr();

	printf("enter the first number : ");
	scanf("%d",&d);

	printf("enter the second number : ");
	scanf("%d",&h);

	printf("before swapping: d = %d, h = %d\n", d, h);

	d = d + h;
	h = d - h;
	d = d - h;

	printf("after swapping: d = %d, h = %d\n", d, h);

	getch();
}