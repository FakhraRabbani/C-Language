//PRINTING SEQUENCE
//program which takes two integers from the user and displays the sequence in the specified format.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int start, end;
	printf("Enter starting integer: ");
	scanf("%d", &start);

	printf("Enter ending integer: ");
	scanf("%d", &end);

	int count = 0;

	for (int i = start; i <= end - count; i++)
	{
		for (int j = i; j <= end - count; j++)
		{
			printf("(%d, %d)", i, j);
		}
		count++;
	}

	return 0;
}