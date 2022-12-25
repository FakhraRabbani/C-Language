//Finding character from character array
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 50
int main()
{
	char f[] = { 'f','a','k','h','r','a','\0' };
	char ch;
	printf("Enter char u want to find: ");
	scanf("%c", &ch);
	printf("\n");
	int i = 0;
	int flag = 0;
	while (f[i] != '\0')
	{
		if (f[i] == ch)
		{
			flag = 1;
			break;
		}
		i++;
	}
	if (flag == 1)
	{
		printf("Found character");
	}
	else
	{
		printf("Not found");
	}

	return 0;
}