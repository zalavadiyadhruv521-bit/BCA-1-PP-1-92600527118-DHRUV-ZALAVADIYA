#include <stdio.h>
#include <conio.h>

void main()
{
	int d,h,min;
	clrscr();

	printf("enter the first value : ");
	scanf("%d",&d);

	printf("enter the second value : ");
	scanf("%d",&h);

	if (d < h)
	min = d;
	else
	min = h;
	printf("minimum value = %d", min);

	getch();
}