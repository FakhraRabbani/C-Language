//Printing letter for ASCII code
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int ascii;
	printf("Enter ASCII code: ");
	scanf("%d", &ascii);

	char ch;
	ch = ascii;
	printf("Corresponding character is %c of %d", ch, ascii);

	return 0;
}
