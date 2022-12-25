//program that determines and displays the Largest and the Second largest of the n values.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int noOfinputs, largestNo, secondLargestno, i = 1, num;

	printf("Enter the number of inputs (>=2) : ");
	scanf("%d", &noOfinputs);

	while (noOfinputs <= 2)
	{
		printf("ERROR; INVALID input!!\n");
		printf("Enter the number of inputs (>= 2): ");
	    scanf("%d", &noOfinputs);	
	}

	printf("\n\n");

	printf("Enter number %d: ", i);
	scanf("%d", &num);
	largestNo = num;
	i++;

	printf("Enter number %d: ", i);
	scanf("%d", &num);
	secondLargestno = num;
	i++;
	

	if (num > largestNo)
	{
		secondLargestno = largestNo;
		largestNo = num;
	}
	else
	{
		secondLargestno = num;
	}
	
	while (i <= noOfinputs)
	{
		printf("Enter number %d: ", i);
		scanf("%d", &num);

		if (num > largestNo)
		{
			secondLargestno = largestNo;
			largestNo = num;
		}
		else if (num > secondLargestno)
		{
			secondLargestno = num;
		}
		i++;
	}

	printf("\n\n");

	printf("Largest number is: %d\n", largestNo);
	printf("Second largest number is: %d", secondLargestno);
	


	return 0;
}