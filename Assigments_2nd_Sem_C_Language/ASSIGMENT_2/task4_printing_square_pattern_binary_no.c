//program which prints the square pattern (1, 0, \n) by taking the size (dimensions) from the user.
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
				printf("1");

			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}
*/
