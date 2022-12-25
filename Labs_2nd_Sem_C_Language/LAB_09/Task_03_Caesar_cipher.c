//CAESAR CIPHER
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 100
void caesarCipher(char cipher[], int k);
int main()
{
	char array[SIZE];
	int key;
	printf("Enter character strings: ");
	scanf("%s", array);
	printf("Enter key: ");
	scanf("%d", &key);
	caesarCipher(array, key);

	return 0;
}
void caesarCipher(char cipher[], int k)
{
	for (int i = 0; cipher[i] != '\0'; i++)
	{
		if (cipher[i] >= 'A' && cipher[i] <= 'Z')
		{
		cipher[i] = ((cipher[i] - 65) + k) % 26;
		cipher[i] = cipher[i] + 65;
		}

		else if (cipher[i] >= 'a' && cipher[i] <= 'z')
		{
			cipher[i] = ((cipher[i] - 97) + k) % 26;
			cipher[i] = cipher[i] + 97;
		}
	}
	printf("Casear cipher is %s", cipher);
}