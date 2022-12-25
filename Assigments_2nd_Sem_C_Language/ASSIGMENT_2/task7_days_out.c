//DAYS OUT
//prgrm that calculates avg no of days a company's employees are absent
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int numberOfemployes();
int numberOfdays(int numDays);
double average(int num_of_employees, int total_days_missed);
int main()
{
	int numEmploye = numberOfemployes();
	printf("The number of employes in the company are %d.\n\n", numEmploye);

	int total_missed_days = missedDayno(numEmploye);
	printf("\nThe total days missed by %d employees are %d.", numEmploye, total_missed_days);

	double averageNodays = average(numEmploye, total_missed_days);
	printf("\n\nAverage Number of days employees were absent were %lf", averageNodays);

	return 0;
}
int numberOfemployes()  //finding total no of employees
{
	int num = 0;
	
	printf("Plz enter the number of employes in the company: ");
	scanf("%d", &num);
	while (num < 1)
	{
		printf("INVALID INPUT ! \nPlz enter the valid number of employes in the company: ");
		scanf("%d", &num);
	}
	
	return num;
}
int missedDayno(int numDays)
{
	int totalDays = 0;
	int total = 0;
	printf("Enter the number of days missed by each employee in past year, \n\n");
	for (int i = 0; i < numDays; i++)
	{
		printf("The number of days missed by %d employee in past year are: ", (i + 1));
		scanf("%d", &totalDays);
		while (totalDays < 0)
		{
			printf("INVALID INPUT!! \nAgain enter the number of days missed by %d employee in past year are: ", (i + 1));
			scanf("%d", &totalDays);
		}		
		total = total + totalDays;
	}
	return total;
}
double average(int num_of_employees, int total_days_missed)
{
	return (double) total_days_missed / num_of_employees;
}
