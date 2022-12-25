//program that asks the user to enter a character. Then displaying the message on the screen whether it is a digit, small alphabet, or capital.
//If the character is not a digit or alphabet then it will simply print it as some other Character.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char ch;
	char proceed = 'y';

	do
	{
		printf("Enter a charcter: ");
		scanf("%c", &ch);
		getchar();

		if (ch >= 65 && ch <= 90)
		{
			printf("It is a Capital Alphabet!\n");
		}
		else if (ch >= 97 && ch <= 122)
		{
			printf("It is a small Alphabet!\n");
		}
		else if (ch >= 48 && ch <= 57)
		{
			printf("It is a Digit!\n");
		}
		else if ((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) || (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127))
		{
			printf("It is some other Charcter!\n");
		}
		//You can also use simple else in last instead of else if
		printf("Do you want to enter again (Y /N)? \n");
		printf("Enter y if you want to proceed:");
		scanf("%c", &proceed);
		getchar();
		printf("\n\n");
	} while (proceed == 'y' || proceed == 'Y');


	return 0;
}
