//program using for loop to find the sum of the cubes of the integers from 1 to n.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int sum = 0;
	int n;

	printf("Write value of n: ");
	scanf("%d", &n);

	for (int num = 1; num <= n; num++)
	{
		sum = sum + (num * num * num);

	}
	printf("Sum = %d", sum);

	return 0;
}