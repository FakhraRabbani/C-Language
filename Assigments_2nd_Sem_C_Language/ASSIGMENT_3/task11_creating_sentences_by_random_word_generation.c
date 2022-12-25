//11-Generating random sentences
#define _CRT_SECURE_NO_WARNINGS
#define SIZE 30
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
	char* artical[] = { "the" , "a" , "one", "some" , "any" }; //Arrays
	char* noun[] = { "boy" ,"girl" , "dog" , "town" , "car" };
	char* verb[] = { "drove", "jumped", "ran", "walked" , "skipped" };
	char* preposition[] = { "to" , "from" , "over" , "under" , "on" };
	int  x, j, k, l;
	int num = 20; //Num of sentences to generate
	char* sentence[SIZE];
	printf("Sentences generated are:\n\n");
	for (int i = 0; i < num; i++)
	{
		x = rand() % 5;
		j = rand() % 5; 
		k = rand() % 5;
		l = rand() % 5;
		strcpy(sentence, *(artical + x));
		strcat(sentence, " ");
		strcat(sentence, *(noun + j));
		strcat(sentence, " ");
		strcat(sentence, *(verb + k));
		strcat(sentence, " ");
		strcat(sentence, *(preposition + l));
		strcat(sentence, ".");		
		sentence[0] = sentence[0] - 32; //Converting to upperCase
		printf("%s ", sentence);
	}
	return 0;
}
