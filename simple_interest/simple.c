#include <stdio.h>
#include <math.h>

/* main - a program to calculate simple ineterest
 *
 * Return : Always 0
 */
int main()
{
	int p,s;
	float t,r;

	printf("Principle: ");
	scanf("%d", &p);

	printf("Time in years:");
	scanf("%fyears", &t);

	printf("Rate: ");
	scanf("%f", &r);

	s = (p*t*r)/100;
	printf("Simple interest is %d*%.2f*%.2f= %d", p,t,r,s);

return 0;
}
