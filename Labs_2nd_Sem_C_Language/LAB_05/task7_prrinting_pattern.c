//printing pattern
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int size = 0;
	do
	{
		printf("Plz enter the size for which : ");
		scanf("%d", &size);
	} while (size < 2 || size % 2 != 0);

	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= size; j++)
		{
			if (i <= j)
			{
				printf("0");

			}
			else
			{
				printf("1s");
			}
		}
		printf("\n");
	}
	return 0;
}