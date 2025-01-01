#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();
	printf("Enter the first angle: ");
	scanf("%d",&a);
	printf("\nEnter the second angle: ");
	scanf("%d",&b);
	c = 180 - a - b;
	printf("\nThird angle: %d",c);
	getch();

}