//CORRESPONDIG NUMBER FINDER
//program which finds out the corresponding number of 1 series to other.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int seriesNo1 = 0, seriesNo2 = 0, diff = 0, corespondingNo = 0, findNo = 0, count1 = 1, count2 = 1;

	do
	{
		printf("Enter First Number of Series 1 : ");
		scanf("%d", &seriesNo1);
		if (seriesNo1 < 0)
			printf("INVALID INPUT!\n");
	} while (seriesNo1 < 0);
	do
	{
		printf("Enter the difference of series 1 : ");
		scanf("%d", &diff);
		if (diff <= 0)
			printf("INVALID INPUT!\n");
	} while (diff <= 0);
	do
	{
		printf("Enter First Number of Series 2 : ");
		scanf("%d", &seriesNo2);
		if (seriesNo2 < 0)
			printf("INVALID INPUT!\n");
	} while (seriesNo2 < 0);
	do
	{
		printf("Enter number from the series 1 : ");
		scanf("%d", &findNo);
		if (findNo < 0)
			printf("INVALID INPUT!\n");
	} while (findNo < 0);

	for (int i = seriesNo1; i <= findNo; i = i + diff)        
	{
		count2 = 1;
		for (int j = seriesNo2; count2 <= count1; j++)            
		{
			if (count1 == count2 && i == findNo)
				corespondingNo = j;
			count2++;
		}
		count1++;
	}

	printf("Your Corresponding Number is %d .", corespondingNo);
	return 0;
}