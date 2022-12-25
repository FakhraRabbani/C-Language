//Program that calculates the age in minutes.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int age;

	printf("Please enter your age in years: ");
	scanf("%d", &age);
	age = age * 365 *24 * 60;

	printf("You are %d minutes old.", age);


	return 0;
}
