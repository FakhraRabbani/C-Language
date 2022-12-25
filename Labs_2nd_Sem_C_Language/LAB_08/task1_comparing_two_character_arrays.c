//comparing 2- char arrays
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 50
int main()
{

	char a1[] = { 'f','a','k','h','r','a','\0' };
	//char a2[] = { 'f','a','k','h','r','a','\0' };
	char a2[] = { 'a','y','e','s','h','a','\0' };

	int i = 0;
	int flag = 1;
	while (a1[i] != '\0')
	{
		if (a1[i] != a2[i])
		{
			flag = 0;
			break;
		}
		i++;
	}

	if (flag == 1)
	{
		printf("identical");
	}
	else
	{
		printf("Not identical");
	}

	return 0;
}