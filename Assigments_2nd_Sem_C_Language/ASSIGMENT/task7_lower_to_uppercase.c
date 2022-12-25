//program that asks the user to enter an alphabet (a-z) in lowercase and then displays it in upper case.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char lowerCase, upperCase;
	int ascii;

	printf("Enter an alphabet (a-z) in lower case:");
	scanf("%c", &lowerCase);

	ascii = lowerCase;
	upperCase = ascii - 32;
	printf("In upper case it is: %c", upperCase);
	return 0;
} 