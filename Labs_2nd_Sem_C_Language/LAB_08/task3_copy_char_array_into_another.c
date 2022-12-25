//copying char arrays
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 50
int main()
{
	char a[] = { 'a','b','c','d','e','f', '\0' };
	char b[] = "fakhra";

	int i = 0;
	while (a[i] != '\0')
	{
		a[i] = b[i];
		i++;
	}

	printf("%s", a);

	return 0;
}