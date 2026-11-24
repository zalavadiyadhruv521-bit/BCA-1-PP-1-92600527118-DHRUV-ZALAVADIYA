#include <stdio.h>
#include <conio.h>

void main()
{
	float length, breadth, area;
	clrscr();

	printf("enter length : ");
	scanf("%f",&length);

	printf("enter breadth : ");
	scanf("%f",&breadth);

	area = length * breadth;

	printf("area of rectangle = %.2f", area);

	getch();
}
