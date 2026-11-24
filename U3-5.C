#include <stdio.h>
#include <conio.h>

void main()
{
	int num1, num2;
	clrscr();

	printf("enter the first number : ");
	scanf("%d",&num1);

	printf("enter the second number : ");
	scanf("%d",&num2);

	if (num1 == num2)
	printf("both numbers are equal");
	else
	printf("both numbers are not equal");

	getch();
}