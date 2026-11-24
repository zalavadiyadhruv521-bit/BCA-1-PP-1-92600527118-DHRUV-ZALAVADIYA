#include <stdio.h>
#include <conio.h>

void main()
{
	int h, d, z;
	clrscr();

	printf("enter the first number : ");
	scanf("%d",&h);

	printf("enter the second number : ");
	scanf("%d",&d);

	printf("before swapping: h = %d, d = %d\n", h, d);

	z = h;
	h = d;
	d = z;

	printf("after swapping: h = %d, d = %d", h, d);

	getch();
}