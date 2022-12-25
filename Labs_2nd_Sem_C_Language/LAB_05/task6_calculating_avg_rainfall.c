//calculating avg rainfall
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	int noOfyears = 0, months = 12, itsOk = 0, sum = 0, counter = 0, inches;

	while (!itsOk)
	{
		printf("Enter number of years: ");
		scanf("%d", &noOfyears);

		if (noOfyears > 0)
		{
			for (int i = 0; i < noOfyears; i++)
			{
				for (int j = 0; j < months; j++)
				{
					printf("Enter inches:");
					scanf("%d", &inches);
					if (inches >= 0)
					{
						sum = sum + inches;
						counter++;
					}
					else
					{
						printf("Invalid");
						j--;
					}
				}
				itsOk = 1;
			}

		}
		else
		{
			printf("Number of inputs not less than 1 \n");
		}
	}

	printf("Months: %d\n", counter);
	printf("Inches: %d\n", sum);
	printf("Average: %d\n", sum / counter);





	return 0;
}