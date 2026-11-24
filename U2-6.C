#include <stdio.h>
#include <conio.h>

void main()
{
	float h, d, z, average;
	clrscr();

	printf("enter the first value : ");
	scanf("%f",&h);

	printf("enter the second value : ");
	scanf("%f",&d);

	printf("enter the third value : ");
	scanf("%f",&z);

	average = (h + d + z) / 3;

	printf("average = %.2f", average);

	getch();
}