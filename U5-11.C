#include<stdio.h>
#include<conio.h>

#define PI 3.14
#define SQUARE(x) (x*x)

void main()
{
	int n;
	clrscr();

	printf("enter number : ");
	scanf("%d",&n);

	printf("square = %d", SQUARE(n));

	printf("\nValue of PI = %.2f", PI);

	getch();
}