//Task-01- Program to count the number of characters and number of lines in a file
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	FILE* fp;
	fp = fopen("demo1.txt", "r");  //opening file

	if (!fp)
	{
		printf("Error: File cannot be opened\n");   //Check if file opened successfully
		return 0;
	}
	else
	{
    //Counting the number of characters and number of lines
	int line = 0;
    int characters = 0;
	while (!feof(fp)) // is end of file //OR use while(ch = getch(fp))!= EOF)// EOF = -1
	{
	    char ch = fgetc(fp);
         characters++;             
		if (ch == '\n'  || ch == '\0')
		{
			line++;
		}
	}

     if (characters > 0)  //Increment lines for last word
    {
         line++;
    }
	printf("\nNo of lines in demo1.txt file are: %d", line);
    printf("\nNo of characters in demo1.txt file are: %d", characters);
	}
	fclose(fp); //closing file
	
	return 0;
}






































