#include<stdio.h>
#include<conio.h>

int area(int l, int b)
{
	return l * b;
}

void main()
{
	int l, b;
	clrscr();

	printf("enter lenght and breadth : ");
	scanf("%d",&l,&b);

	printf("area of rectangle = %d", area(l, b));

	getch();
}