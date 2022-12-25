//Program that asks the user to enter a positive integer n. Then printing all the twin primes from 2 to till the n(inclusive).
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num = 0, pNo1 = 0, pNo2 = 0;
	int value = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	while (num <= 4)
	{
		printf("INVALID INPUT\n");
		printf("Enter the number: ");
		scanf("%d", &num);
	}
	printf("Twin Primes between 2 and %d are: \n", num);
	for (int i = 3; i <= num; i++)
	{
		value = 0;
		for (int j = 1; j <= i; j++)
		{
			if(i % j == 0)
			{
				value++;
			}
		}
		if (i == 3)
		{
			pNo2 = pNo1 = i;
		}
		pNo1 = pNo2;
		if (value == 2)
		{
			pNo2 = i;
		}
		if (pNo1 + 2 == pNo2)
		{
			printf("(%d, %d)", pNo1, pNo2);
		}
	}		
	return 0;
}