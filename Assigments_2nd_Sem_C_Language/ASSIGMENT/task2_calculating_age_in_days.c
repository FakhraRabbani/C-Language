//Calculating age in days
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int age;

	printf("Please enter your age in years: ");
	scanf("%d", &age);
	age = age * 365;

	printf("You are %d days old.", age);


	return 0;
}