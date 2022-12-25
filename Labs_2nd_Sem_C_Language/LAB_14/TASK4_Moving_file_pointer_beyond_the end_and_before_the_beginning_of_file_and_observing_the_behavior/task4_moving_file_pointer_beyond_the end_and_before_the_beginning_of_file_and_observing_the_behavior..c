//Task-04 -Program to read from a file, and try to move the file pointer beyond the end of the fileand before the beginning of the file and observer the behavior.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    FILE* fp;
    fp = fopen("move.txt", "r");

    if (!fp)
    {
        printf("Error: File cannot be opened\n");   //Check if file opened successfully
        return 0;
    }
    else
    {
        printf("Pointer beyond the end of file is: ");
        fseek(fp, +1, SEEK_END);
        printf("%d\n", ftell(fp));
        printf("Pointer before the start of file is: ");
        fseek(fp, -1, SEEK_SET);
        printf("%d", ftell(fp));
    }   
    fclose(fp);

	return 0;
}





