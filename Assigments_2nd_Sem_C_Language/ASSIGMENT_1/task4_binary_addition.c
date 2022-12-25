//BINARY ADDITION
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int tempDig = 0, tempNo1 = 0, tempNo2 = 0, digit1 = 0, digit2 = 0, binary1 = 0, binary2 = 0, sum = 0, rem = 0, checkBinary1 = 0, checkBinary2 = 0, notBinary1 = 0, notBinary2 = 0;
	int counter = 1;
	do   //Input Validation
	{
		notBinary1 = 0;
		printf("Enter first Number : ");
		scanf("%d", &binary1);
		tempNo1 = binary1;
		for (int i = 1; tempNo1 != 0; i++)
		{
			checkBinary1 = tempNo1 % 10;
			tempNo1 = tempNo1 / 10;
			if (checkBinary1 > 1)
				notBinary1++;
		}
		tempNo1 = binary1;
		if (binary1 < 0 || notBinary1>0)
			printf("Invalid Input ! ");

	} while (binary1 < 0 || notBinary1>0);
	do    //Input Validation
	{
		notBinary2 = 0;
		printf("Enter second Number : ");
		scanf("%d", &binary2);
		tempNo2 = binary2;
		for (int i = 1; tempNo2 != 0; i++)
		{
			checkBinary2 = tempNo2 % 10;
			tempNo2 = tempNo2 / 10;
			if (checkBinary2 > 1)
				notBinary2++;
		}
		tempNo2 = binary2;
		if (binary2 < 0 || notBinary2>0)
			printf("Invalid Input ! ");

	} while (binary2 < 0 || notBinary2>0);

	//Binary Addition
	while (tempNo1 > 0 || tempNo2 > 0 || rem != 0)
	{
		digit1 = tempNo1 % 10;
		digit2 = tempNo2 % 10;
		tempNo1 = tempNo1 / 10;
		tempNo2 = tempNo2 / 10;
		tempDig = digit1 + digit2 + rem;
		rem = 0;
		if (tempDig > 1)
		{
			rem = tempDig / 2;
			tempDig = tempDig % 2;
		}
		sum = (tempDig * counter) + sum;
		counter = counter * 10;


	}

	printf("\n\n");
	printf("\t  %9d\n\t+\n\t  %9d\n\t------------\n\t  %9d", binary1, binary2, sum);
	printf("\n\n");
	return 0;

}