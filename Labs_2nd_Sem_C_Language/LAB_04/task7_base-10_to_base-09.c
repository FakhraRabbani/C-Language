//Decimal No (base-10) to its equivalent number in (base-9)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int num, rem;
	int deci = 0, base = 1;

	printf("Enter a decimal (base-10) number: ");
	scanf("%d", &num);

	while (num > 0)
	{
		rem = num % 9;
		num = num / 9;
		deci = deci + (rem * base);
		base = base * 10;
	}

	printf("The equivalent number in base-9 is : %d", deci);

	return 0;
}