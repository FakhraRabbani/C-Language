//Task-03-Concatenating 2 files
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE* fp1, * fp2, * fp3;
	char ch, f1[30], f2[30], f3[60];
	printf("Concatenating two files into 3rd one:\n");

	printf("Enter first file name : ");
	scanf("%s", f1);       //filea.txt
	printf("Enter second file name : ");
	scanf("%s", f2);       //fileb.txt
	printf("Enter third new file name : ");
	scanf("%s", f3);       //fileab.txt

	//opening file
	fp1 = fopen(f1, "r");
	fp2 = fopen(f2, "r");
	fp3 = fopen(f3, "w");
	if (fp1 == NULL || fp2 == NULL)
	{
		printf("Error: File cannot be opened\n");   //Check if file opened successfully
		return 0;
	}
	if (f3 == NULL)
	{
		printf("Error: File cannot be opened\n");   //Check if file opened successfully
		return 0;
	}
	while ((ch = fgetc(fp1)) != EOF)
	{
		fputc(ch, fp3);
	}
	while ((ch = fgetc(fp2)) != EOF)
	{
		fputc(ch, fp3);
	}
	printf("The two files concatenated successfully.");
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
	return 0;
}
