#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 *main - a program that checks if a number is a prime number or not.
 *
 *Return : Always 0
 */

int main()
{
	int n , i ,c = 0;

printf("Enter a number: ");
scanf("%d", &n);

	for(i=2; i<=n/2; i++)
{
	if(n%i==0)
	{
		c++;
		break;
	}
}
if(c == 0&& (n != 1 && n != 0))
{
	printf("%d is a prime number.", n);
}
	else
{
	printf("%d is not a prime number****", n);
}
return 0;
}
