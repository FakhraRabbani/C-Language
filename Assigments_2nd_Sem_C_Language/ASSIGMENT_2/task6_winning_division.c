//WINNING DIVISION
//prgrm which determines which of a company's four divisions had the greatest sales for a quarter
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double getSales(double sale);
void findHighest(double d1, double d2, double d3, double d4);
int main()
{
	double div1 = 0.0, div2 = 0.0, div3 = 0.0, div4 = 0.0;
	div1 = getSales(div1);
	div2 = getSales(div2);
	div3 = getSales(div3);
	div4 = getSales(div4);
	printf("\n");
	findHighest(div1, div2, div3, div4);
	return 0;
}
double getSales(double sale) //asks user for dividions quarterly sales figure
{
	printf("Division's quarterly sales figure is: $ ");
	scanf("%lf", &sale);
	while (sale < 0.00)  //Input validation
	{
		printf("INVALID INPUT\nPlz enter valid division's quarterly sales figure : $ ");
		scanf("%lf", &sale);
	}
	return sale;
}
void findHighest(double d1, double d2, double d3, double d4) //determines largest sale and prints no of high-grossing division
{
	if ((d1 >= d2) && (d1 >= d3) && (d1 >= d4))
	{
		printf("Division 1 is the high grossing division.\nIts sales figure is $ %lf.", d1);
	}
	else if ((d2 >= d1) && (d2 >= d3) && (d2 >= d4))
	{
		printf("Division 2 is the high grossing division.\nIts sales figure is $ %lf.", d2);
	}
	else if ((d3 >= d1) && (d3 >= d2) && (d3 >= d4))
	{
		printf("Division 3 is the high grossing division.\nIts sales figure is $ %lf.", d3);
	}
	else if ((d4 >= d1) && (d4 >= d2) && (d4 >= d3))
	{
		printf("Division 4 is the high grossing division.\nIts sales figure is $ %lf.", d4);
	}
	
}

