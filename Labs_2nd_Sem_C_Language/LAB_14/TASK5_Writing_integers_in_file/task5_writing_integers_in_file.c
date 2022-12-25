//Task-05-Writing integers in the file
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
    FILE* fp;
    int num = 0;   
    int arr[100];
    fp = fopen("integer.txt", "w");  //opening file
    if (!fp)
    {
        printf("Error: File cannot be opened\n");   //Check if file opened successfully
        return 0;
    }
    else
    {
        while (num < 100)   //running a loop from 0 to 99
        {
            arr[num] = num;
            fwrite(&arr[num], sizeof arr[num], 1, fp);  //writing using fwrite() function
            num++;
        }     
    }
    fclose(fp);
    return 0;
}


