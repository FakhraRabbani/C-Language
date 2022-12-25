//program which prints the window pattern after taking height and width from the user.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int height = 0, width = 0;

	do
	{
		printf("Plz enter the height of rectangle: ");
		scanf("%d", &height);
	} while (height < 3 || height % 2 == 0);

	do
	{
		printf("Plz enter the width of rectangle: ");
		scanf("%d", &width);
	} while (width < 5 || width % 2 == 0);


	for (int i = 1; i <= height; i++)
	{
		for (int j = 1; j <= width; j++)
		{
			if (i % 2 != 0 || j% 2 != 0)
			{
				printf("+");
				
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
