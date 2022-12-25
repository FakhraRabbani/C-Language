// Displaing a sentence with its words reversed
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 200
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char lineOftext[SIZE];
	printf("Enter a line of text: ");
	fgets(lineOftext, SIZE, stdin);;

	char* p;
	p = strtok(lineOftext," ");

	char* rev[SIZE];
	int i = 0;
	while (p != NULL)
	{
		printf("%s\n", p);
		rev[i] = p;
		i++;
		p = strtok(NULL," ");
		
	}
	printf("\nString in reverse order is:\n");
	for (int j = i - 1; j >= 0; j--)
	{
		printf("%s ", rev[j]);
	}


	return 0;
}
