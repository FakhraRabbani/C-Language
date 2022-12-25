//Base-7 to base-10
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int digit = 0, rem;
	int num = 0, deci = 0, base = 1;
	int i = 1;

	while (digit != -1)
	{
		printf("Enter a base-7 digit: ");
		scanf("%d", &digit);

		if (digit > 0)
		{
			num = num + (digit * i);
			i = i * 10;
	    }
		 
	}
	
	printf("The number in base-7 is : %d\n", num);

	while (num > 0)
	{
		rem = num % 10;
		num = num / 10;
		deci = deci + (rem * base);
		base = base * 7;
	}
	
	printf("The equivalent number in Base-10 is: %d", deci);

	return 0;
}