//Counting the number of digits, alphabets and spaces in the string
//Storing all alphabets and spaces in character array
//Storing all digits in the integer array
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 200
void upperCase(char* ch,int s);
void displayIntarray(int* integer_array, int size);
int main()
{
	//Creating character Array of size 200
	char data[SIZE];
	//Taking input in string through fgets() function
	printf("Plz enter a string: ");
	fgets(data, SIZE, stdin);
	//fgets(data, sizeof data, stdin);
	
	//Variables for counting number of digits, alphabets and spaces in the string
	int digits = 0, alphabets = 0, spaces = 0;
	//Visiting data array and counting the number of digits, alphabets and spaces in the string
	for (int i = 0; *(data + i) != '\0'; i++)
	{
		if ((*(data + i) >= 'a' && *(data + i) <= 'z') || ( *(data + i) >= 'A' && *(data + i) <= 'Z'))
		{
			alphabets++;
		}
		else if (*(data + i) >= '0' && *(data + i) <= '9')
		{
			digits++;
		}
		else if (*(data + i) == ' ')
			spaces++;
		
	}
	printf("Total alphabets in string are %d\n", alphabets);
	printf("Total digits in string are %d\n", digits);
	printf("Total spaces in string are %d\n", spaces);





	//Creating a character array and storing all alphabets and spaces in char array
	char array[SIZE];
	int k = 0;
	for (int i = 0; *(data + i) != '\0'; i++)
	{
		if ((*(data + i) >= 'a' && *(data + i) <= 'z') || (*(data + i) >= 'A' && *(data + i) <= 'Z')  || (*(data + i) == ' '))
		{
			*(array + k) = *(data + i);
			k++;
		}

	}
	int sizeChararray = 0;
	printf("\nCharacter Array containing all alphabets and spaces: ");
	for (int i = 0; i < k; i++)
	{
		printf("%c, ", *(array + i));
		sizeChararray++;
	}
	printf("\nSize of character array is %d", sizeChararray);

	upperCase(array, sizeChararray);

	printf("\n\n");

	//Creating a integer array and storing all digits in the integer array
	int intArray[SIZE];
	int j = 0;
	for (int i = 0; *(data + i) != '\0'; i++)
	{
		if (*(data + i) >= '0' && *(data + i) <= '9')
		{
			*(intArray + j) = *(data + i) - '0';
			j++;
		}

	}
	int sizeIntarray;
	sizeIntarray = j;
	printf("\nSize of integer array is %d", sizeIntarray);
	displayIntarray(intArray, sizeIntarray);

	return 0;


}
void upperCase(char *ch,int s)
{
	printf("\nAlphabets in upperCase are: ");
	for (int i = 0; i < s ; i++)
	{
			printf("%c", toupper(*(ch + i)));
			
	}
}
void displayIntarray(int *integer_array, int size)
{
	printf("\nInteger Array containing all digits: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d, ", *(integer_array + i));
		
	}
}







