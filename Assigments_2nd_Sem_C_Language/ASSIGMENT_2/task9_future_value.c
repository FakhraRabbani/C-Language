//prgrm that prompts user to enter account's present value, monthly interest rate, and no of months that money will be left in the account.
//Then it will display future value of account after specified no of months
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
double futureValue(double P, double i, double t);
int main()
{
	double future_value, presentValue, monthly_interest_rate, months;

	printf("Enter account's present value: ");
	scanf("%lf", &presentValue);
	printf("Enter monthly interest rate: ");
	scanf("%lf", &monthly_interest_rate);
	printf("Enter number of months that the money will be left in the account: ");
	scanf("%lf", &months);

	future_value = futureValue(presentValue, monthly_interest_rate, months);
	printf("\nAccounts Future Value will be : %lf", future_value);
	return 0;
}
double futureValue(double P, double i, double t)
{
	double F;
	i = i * 0.01;
	F = P * pow((1 + i), t);
	return F;
}
