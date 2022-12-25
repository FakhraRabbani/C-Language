//Algorithm that asks the user to enter the first number of a series and the difference between the numbers, and then display the first five numbers of the series.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int firstNum, diffNum, num2, num3, num4, num5;

	printf("Enter the first number of series: ");
	scanf("%d", &firstNum);

	printf("The difference in consecutive numbers: ");
	scanf("%d", &diffNum);

	num2 = firstNum + diffNum;
	num3 = num2 + diffNum;
	num4 = num3 + diffNum;
	num5 = num4 + diffNum;

	printf("The First 5 numbers of the series are: %d, %d, %d, %d, %d", firstNum, num2, num3, num4, num5);
	return 0;
}