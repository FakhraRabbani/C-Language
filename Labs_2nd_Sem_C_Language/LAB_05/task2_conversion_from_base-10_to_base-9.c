//Prgrm for converting from base-10 to base-9
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	int base = 1, deci = 0;
	int num;
	int rem;

	printf("Input decimal number in base-10: ");
	scanf("%d", &num);

	while (num > 0)
	{
		rem = num % 9;
		num = num / 9;
		deci = deci + (rem * base);
		base = base * 10;
	}

	printf("Base-9 is: %d", deci);


	return 0;
}