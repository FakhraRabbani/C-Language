//Strings ending with ed
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100
int main()
{
    char strings[SIZE];
    printf("Plz enter a sentence: ");

    int i = 0;
   
    while (i < SIZE)
    {
        strings[i] = getchar();
        if (strings[i] == 10)
        {
            strings[i] = '\0';
            break;
        }
        i++;
    }
    
    printf("Words ending with ed are: \n");
    char* p;
    int l;
    for (int i = 0; i < SIZE; i++)
    {
        if (i == 0)
        {
            p = strtok(strings, " ");
            l = 0;
            while (p[l] != 0)
            {
                l++;
            }
            if (p[l - 2] == 'e' && p[l - 1] == 'd')
                printf("%s\n", p);
        }
        
        p = strtok(NULL, " ");
        l = 0;
        while (p[l] != 0)
        {
            l++;
        }
        if (p[l - 2] == 'e' && p[l - 1] == 'd')
            printf("%s\n", p);
            
    }

    return 0;
}




































































































