//addition
#include <stdio.h>
#include <conio.h>

void main()
{
	int a,b,c;
	clrscr();

	printf("add the first number : ");
	scanf("%d",&a);

	printf("add the second number : ");
	scanf("%d", &b);

	c=a+b;

	printf("the total of %d and %d is %d",a,b,c);



	getch();
}