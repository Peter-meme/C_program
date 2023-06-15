#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 *main - a program that checks if a number is a prime number within a range
 *
 *Return : Always 0
 */

int main()
{
	int n , m, i, j, c, count;

printf("Enter first number: ");
scanf("%d", &n);

printf("Enter second number: ");
scanf("%d", &m);

printf("The prime numbers between %d and %d are as below: ", n,m);

	while(!(i==0))
		{
			i=i/10;
			count++;
		}

for(i=n; i<=m; ++i)
/*intervals between n and m = i
 * n is the lowest bound while m is the highest bound
 *i becomes the range 
 * hence we assume ot includes all prime numbers to be printed/ checked
 */
{
	c = 0;
	for(j=2; j<=i/2; j++)/*if i is prime or not*/
	{
		if(i%j == 0)
		{
			c = 1;
			break;
		}
	}
	
if(c == 0 && (!(i==0 || i == 1)))
	printf("%d \n %d \t", count, i);

}

return 0;
}
