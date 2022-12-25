//algorithm that asks the user to enter a character and then display the next five consecutive characters.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char char1, char2, char3, char4, char5, char6;

	printf("Enter a character: ");
	scanf("%c", &char1);

	char2 = char1 + 1;
	char3 = char2 + 1;
	char4 = char3 + 1;
	char5 = char4 + 1;
	char6 = char5 + 1;

	printf("The next five characters are: %c, %c, %c, %c, %c", char2, char3, char4, char5, char6);

	return 0;
}