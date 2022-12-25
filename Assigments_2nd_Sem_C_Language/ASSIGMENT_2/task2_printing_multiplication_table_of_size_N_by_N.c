//program which takes a positive integer N from the user, and prints the multiplication table of size N by N.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int N = 0;
	printf("Enter the limit till which you want to print tables: ");
	scanf("%d", &N);
	printf("\n   ");

	for (int j = 1; j <= N; j++)
	{
		printf(" %3d", j);
	}
	printf("\n    +");
	printf("----------------------------------------------------------------------------------------");
	for (int i = 1; i <= N; i++)
	{
		printf("\n %2d |", i);
		for (int k = 1; k <= N; k++)
		{
			printf(" %3d", i * k);
		}

	}
	return 0;
}



