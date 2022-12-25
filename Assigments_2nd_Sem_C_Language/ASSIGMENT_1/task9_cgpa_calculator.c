//program which asks the user to enter his roll number (integer value) and his number of semesters completed. 
//Then ask the user to enter GPA of thegiven number of semesters.
//Calculating the CGPA and  displaying it.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int rollNum = 0, semNo = 0;
	double gpa = 0.0, c_gpa = 0.0;
	double sum = 0.0;

	printf("Enter your roll number: ");
	scanf("%d", &rollNum);

	printf("Enter number of Semesters: ");
	scanf("%d", &semNo);

	while ((rollNum < 0) || (semNo < 1) || (semNo > 8))
	{
		if ((semNo < 1) || (semNo > 8))
		{
			printf("Enter number of Semesters in range of 1 to 8: ");
			scanf("%d", &semNo);
		}
		if (rollNum < 0)
		{
			printf("Enter your correct roll number: ");
			scanf("%d", &rollNum);
		}
	}

	for (int i = 1; i <= semNo; i++)
	{
		printf("Enter your semester %d GPA: ", i);
		scanf("%lf", &gpa);
		while ((gpa < 0) || (gpa > 4))
		{
			printf("Enter your semester %d GPA again: ", i);
			scanf("%lf", &gpa);
		}
		sum = sum + gpa;
		c_gpa = sum / i;
	}
	printf("**********************  Result Card****************\n");
	printf("Roll Number: %d\n", rollNum);
	printf("CGPA: %.2lf", c_gpa);

	return 0;

}