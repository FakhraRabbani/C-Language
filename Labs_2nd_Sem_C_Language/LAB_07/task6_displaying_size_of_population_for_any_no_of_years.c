//prgrm that displays size of population for any number of years
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float calculateSize(float p, float b, float d)
{
	float n;
	n = p + (b * p) - (d * p);
	return n;
}
int main()
{
	float startSize, annualBirthrate, annualDeathrate, numOfyears;

	do
	{
		printf("Enter the starting size of a population: ");
		scanf("%f", &startSize);
	} while (startSize < 2);

	do
	{
		printf("Enter the annual birth rate: ");
		scanf("%f", &annualBirthrate);
	} while (annualBirthrate < 0);

	do
	{
		printf("Enter the annual death rate: ");
		scanf("%f", &annualDeathrate);
	} while (annualDeathrate < 0);

	do
	{
		printf("Enter the number of years to display: ");
		scanf("%f", &numOfyears);
	} while (numOfyears < 1);

	float currentSizepopulation;

	for (int i = 1; i <= numOfyears; i++)
	{
		currentSizepopulation = calculateSize(startSize, annualBirthrate, annualDeathrate);
		printf("Population for %d year is %.1f\n", i, currentSizepopulation);
		startSize = currentSizepopulation;
	}


	return 0;
}
