#include<stdio.h>
#include<conio.h>

main()
{
	float fah,cel;
	clrscr();
	printf("Enter the temperature in celsius: ");
	scanf("%f",&cel);
	fah = (9/5 * cel) + 32;
	printf("The temperature in Fahrenheit: %.2f",fah);
	getch();

}
