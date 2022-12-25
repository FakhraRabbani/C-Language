//Task-02-  Reverse prgrm 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    FILE* file;     //File pointer variable for the original file
    FILE* reverse;     //File that will store the reversed contents of the original file

    file = fopen("original_file.txt", "r");     // Opening original file for reading
    reverse = fopen("reverse_file.txt", "w");    //Opening  reversed contents file for writing

    if (file == NULL || reverse == NULL)
    {
        printf("Error: files can't open\n");
        return 0;
    }
    else
    {
        int length;
        // move the file pointer to the end of the file
        fseek(file, 0, SEEK_END);
        // use ftell() to return the current value of the position indicator, which will give us the number of characters in the file
        length = ftell(file);

        int i = 0;
        while (length > i)
        {
            i++;    
            fseek(file, -i, SEEK_END);
            fputc(fgetc(file), reverse);
        }

    }
    printf("\nContent has been reversed in reverse file from original.");

    // close both files
    fclose(file);
    fclose(reverse);

    return 0;
}


