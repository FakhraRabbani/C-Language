//Tokenizing telephone number
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	char teleNo[SIZE];
	printf("Enter any telephone number of form (XXX) XXX-XXXX: ");
	fgets(teleNo, SIZE, stdin);

	char* p1 = strtok(teleNo, ")");
	char* p2 = strtok(NULL, "-");
	char* p3 = strtok(NULL, "\0");

	printf("Area Code(First 3 digits of phone no): %s\n", p1);
	printf("Last digits: %s\n", p3);

	char* p = strcat(p1, p3); //concatenating
	printf("%s", p);

	//int Area = atoi(p1);
	//int phone = atoi(p);
	//printf("%d\n", Area);
	//printf("%d\n", phone);

	return 0;
}