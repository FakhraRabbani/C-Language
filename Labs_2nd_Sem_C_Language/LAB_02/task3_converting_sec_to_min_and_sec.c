//program that converts seconds to minutes and seconds.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int seconds, min, sec;

	printf("Enter seconds: ");
	scanf("%d", &seconds);

	printf("Its equivale to \n");

	min = seconds / 60;
	printf("Minutes: %d \n", min);

	sec = seconds % 60;
	printf("Seconds: %d ", sec);
	
	return 0;
}