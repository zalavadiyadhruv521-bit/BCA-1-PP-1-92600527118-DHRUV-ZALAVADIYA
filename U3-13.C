#include <stdio.h>
#include <conio.h>

void main()
{
	int a,b,c,max;
	clrscr();

	printf("enter first value : ");
	scanf("%d",&a);

	printf("enter second value : ");
	scanf("%d",&b);

	printf("enter third value : ");
	scanf("%d",&c);

	if (a >= b && a >= c)
	max = a;
	else if (b >= a && b >= c)
	max = b;
	else
	max = c;
	printf("maximum value = %d",max);

	getch();
}