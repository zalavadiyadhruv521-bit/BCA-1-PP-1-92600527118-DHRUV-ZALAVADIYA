#include <stdio.h>
#include <conio.h>

void main()
{
	int rollno, m1, m2, m3, m4, m5, total, grade;
	float percentage;
	clrscr();

	printf("enter rollnumber : ");
	scanf("%d",&rollno);

	printf("enter m1 : ");
	scanf("%d",&m1);

	printf("enter m2 : ");
	scanf("%d",&m2);

	printf("enter m3 : ");
	scanf("%d",&m3);

	printf("enter m4 : ");
	scanf("%d",&m4);

	printf("enter m5 : ");
	scanf("%d",&m5);

	printf("---------------\n");

	printf("rollno : %d\n",rollno);

	total = m1 + m2 + m3 + m4 + m5;
	printf("total marks : %d\n",total);

	percentage = total * 100 / 500;
	printf("percentage : %.2f\n", percentage);

	if(percentage >= 35)
	{
	printf("pass\n");
	}
	else
	{
	printf("fail\n");
	}

	if(percentage >= 90)
	{
	printf("A");
	}
	else if(percentage >= 70)
	{
	printf("B");
	}
	else if(percentage >= 50)
	{
	printf("C");
	}
	else
	{
	printf("mari ja loda");
	}

	getch();

}