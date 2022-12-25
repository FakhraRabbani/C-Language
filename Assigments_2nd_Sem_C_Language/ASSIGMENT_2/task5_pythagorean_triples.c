//program to find and display all Pythagorean triples for side1, side2 and hypotenuse all no larger than 200.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void pythogoreanTriples()
{
	int a = 0, b = 0, c = 0;
	int limit = 200;
	printf("Pythagorean Triples:\n");
	for (a = 1; a <= limit; a++)
	{
		for (b = 1; b <= limit; b++)
		{
			for (c = 1; c <= limit; c++)
			{
				if (((pow(a, 2) + pow(b, 2)) == pow(c, 2)) && (a > b) )
				{
					printf("{%d, %d, %d}\n", a, b, c);
				}
			}
		}
	}
}
int main()
{
	pythogoreanTriples();
	return 0;
}

