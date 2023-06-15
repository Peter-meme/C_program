#include <stdio.h>
#include <math.h>

int main()
{
	int num,i;
	printf("enter number: ");
	scanf("%d", &num);
	printf("enter divibility num: " );
	scanf("%d", &i);
	if(num%i==0)
	{
	 printf("%d is divisible by %d", num,i);
	}
	else
	{
	printf("%d is not divisible by %d", num,i);
	}
return 0;
}
