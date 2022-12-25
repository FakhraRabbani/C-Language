//Strings starting with b
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 500
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char strings[SIZE];
	printf("Plz enter a sentence: ");
	fgets(strings, SIZE, stdin);  //Reading a series of strings
	printf("%s\n", strings);

	char* p;
	p = strtok(strings, " ");
	printf("Words beginning with letter 'b' are: \n");
	while (p != NULL)
	{
		//printing only those that begin with letter 'b'
		if (p[0] == 'b')   
		{
			printf("\n%s", p);
		}
		p = strtok(NULL, " ");
    }

	return 0;
}
