//Algorithm that takes the marks obtained by a student in a course and determines whether the student was PASS or FAIL in the course.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int marks;

	printf("Please enter marks: ");
	scanf("%d", &marks);

	if (marks < 0 || marks > 100)
	{
		printf("Invalid Marks");
	}

	else if (marks >= 50)
	{
		printf("The student was passed in the course.");
	}

	else
	{
		printf("The student was failed in the course.");
	}
	return 0;
}