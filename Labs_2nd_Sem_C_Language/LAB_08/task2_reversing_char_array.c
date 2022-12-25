//reversing char arrays
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 50
int main()
{
	char f[] = { 'f','a','k','h','r','a','\0' };
	int i = 0;
	while (f[i] != '\0')
	{
		i++;
	}
	printf("i = %d\n", i);
	printf("Before reversing: ");
	printf("%s", f);
	int k;
	k = i - 1;
	int s;
	s = k / 2;
	printf("\nk = %d\n", k);
	printf("s = %d\n", s);
	char temp;
	for (int j = 0; j <= s; j++)
	{
		temp = f[j];
		f[j] = f[k];
		f[k] = temp;
		k--;
	}

	printf("\n");
	printf("After reversing: ");
	printf("%s", f);



	//Another method
	/*
	 char f1[] = { 'f','a','k','h','r','a','\0' };
	 printf("correct order: ");
	 printf("%s", f1);
	 printf("\n");

	 int size = 6;
	 int i = size - 1; // i =size;
	 while (i >= 0)
	 {
		 printf("%c", f1[i]);   //arhkaf
		 i--;
	 }
	 */


	return 0;
}