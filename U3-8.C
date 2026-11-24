#include <stdio.h>
#include <conio.h>

void main()
{
	int year;
	clrscr();
	printf("enter the year : ");
	scanf("%d",&year);

	if (year % 4==0)
	{
		printf("%d is a leap year");
	}
	else
	{
		printf("%d is not a leap year");
	}
	getch();

}