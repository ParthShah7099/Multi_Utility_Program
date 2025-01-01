#include<stdio.h>
#include<conio.h>
main()
{
	float salary,hra,da,ta,gross;
	clrscr();
	printf("Enter your Salary: ");
	scanf("%f",&salary);
	hra = salary * 10/100;
	da = salary * 5/100;
	ta = salary * 8/100;
	gross = salary + hra + da + ta;
	printf("Gross Salary: %.2f",gross);
	getch();

}