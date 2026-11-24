#include <stdio.h>
#include <conio.h>

void main()
{
	float h;
	clrscr();

	printf("enter a number : ");
	scanf("%f",&h);

	printf("square = %.2f\n", h * h);
	printf("cube = %.2f\n", h * h * h);

	getch();
}