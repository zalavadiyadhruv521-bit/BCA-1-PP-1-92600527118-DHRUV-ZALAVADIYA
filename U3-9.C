#include <stdio.h>
#include <conio.h>

void main()
{
	int num_1, num_2;
	clrscr();

	printf("enter the first number : ");
	scanf("%d",&num_1);

	printf("enter the second number : ");
	scanf("%d",&num_2);

	if (num_1 % num_2 == 0)
	printf("the number is divisible");
	else
	printf("the number is not divisible");
	getch();

}