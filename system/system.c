#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
	char name[50];
	int roll;
	int age;
	float total_marks;
}s[5];
	int main()
{ /*input of information*/
	int i = 0;
	int n;
/*Enter the number of students you are going to record*/
	printf("number of inputs/students:   ");
	scanf("%d", &n);
/*Enter information of the students*/
	for(i=0; i<n;++i)
	{
		s[i].roll = i+1;

	printf("student roll number%d,\n", s[i].roll);
	printf("student name: ");
	scanf("%s", s[i].name);
	printf("student age: ");
	scanf("%d", &s[i].age);
	printf("student total marks: ");
	scanf("%f", &s[i].total_marks);
	}
printf("\nStudent Records: \n\n");
for (i=0; i<n; ++i)
{/*display of information*/
	printf("\tstudent roll number: %d\n", i+1);
	printf("\tstudent name: %s\n", s[i].name);
	printf("\tstudent age: %i\n", s[i].age);
	printf("\tstudent total marks: %.1f\n", s[i].total_marks);
	printf("\n");
}
return 0;
}
