#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int valid(int d, int m,int y)
{
if (y >=1500 && y<=2900)/*year validity*/
	{
		if (m>=1 && m<=12)/*month validity*/
		{
			if (d>=1 && d<=31)/*day validity*/
			{
				if ((d>=1 && d<=30) && (m==4||m==6||m==9||m==11))/*months with 30 days*/
				return 1;
			else if ((d>=1 && d<=31) && (m==1|| m==3|| m==5|| m==7|| m==8|| m==10|| m==12))
				return 1; /*31days validity*/
				else if ((d>=1 && d<=28) && (m==2))
					return 1;
				else if(((d>=1 && d <=29) && (m==2)) && (((y%400==0)||(y%100!=0))&&(y%4==0)))/*leap year*/
				return 1;
				else
					return 0;
			}
			else 
				return 0;
		}
		else 
			return 0;
	}
else 
	return 0;
}
int main()
{
        int month [12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        char week[7] [10];
        int i,s=0,day,mon,year;

strcpy(week[0], "sunday");
strcpy(week[1], "monday");
strcpy(week[2], "tuesday");
strcpy(week[3], "wednesday");
strcpy(week[4], "thursday");
strcpy(week[5], "friday");
strcpy(week[6], "saturday");

        printf("Enter the date(dd): ");
        scanf("%d", &day);

        printf("Enter the month(mm): ");
        scanf("%d", &mon);

        printf("Enter the year(yyyy): ");
        scanf("%d", &year);
	if (((year%400==0)||(year%4==0))&&(year%100!=0))
		month[1]=29;
if (valid(day,mon,year) == 1)
{
	printf("date is correct [%d/%d/%d].\n", day,mon,year);
	for (i=0; i<mon-1;i++)
s=s+month[i];
s=s+(day+year+(year/4)-2);
s=s%7;

printf("Day of the week is %s", week[s]);
}
else
printf("Date is incorrect.\n");
	return 0;
}
