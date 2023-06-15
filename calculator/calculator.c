#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	char opt;
	int x, y;
	float res;

printf("Enter the operator:");
scanf("%c", &opt);

printf("Enter the first number:");
scanf("%i", &x);

printf("Enter the second number:");
scanf("%i", &y);

if(opt =='+')
{
	res = x + y;
	printf("%i + %i = %.2f", x,y,res);
}
else if(opt=='-')
{
	res = x - y;
	printf("%i - %i = %.2f", x,y,res);
}
else if(opt=='*')
{
	res = x * y;
	printf("%i * %i = %.2f", x,y,res);
}
else if(opt =='/')
{
if(y == 0)
{
	printf("\n Error. Please enter a valid number.");
	scanf("%i", &y);
}
	res = x / y;
	printf("%i / %i = %.2f", x,y,res);
}
else
{
printf("\n Error");
}

return res;
}
