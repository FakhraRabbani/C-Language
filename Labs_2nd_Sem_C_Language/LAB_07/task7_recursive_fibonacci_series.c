//Printing fibonacci series recursively 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
unsigned long long int fibonacci(int num);
int main()
{
	int num = 0;
	int temp = 0;
	do
	{
		printf("Plz enter a number for which you want the series: ");
		scanf("%d", &num);
	} while (num < 0);
	printf("\n");
	printf("The fibonacci series will be : \n");
	for (int i = 0; i < num; i++)
	{
		printf("%llu, ", fibonacci(i));
		temp = fibonacci(i);
	}
	printf("\n\nLargest fibonacii series is %d", temp);
	return 0;
}
unsigned long long int fibonacci(int num)
{
	if (num == 0 || num == 1)
	{
		return num;
	}
	else
	{
		return fibonacci(num - 1) + fibonacci(num - 2);
	}
}

