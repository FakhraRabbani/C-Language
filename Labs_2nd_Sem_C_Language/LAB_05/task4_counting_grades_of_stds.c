//program that ask the use to enter grades of students (A, B, C, D, F) and counting how many students got A, B, C, Dand F grades.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{

	int sumOfa = 0, sumOfb = 0, sumOfc = 0, sumOfd = 0, sumOff = 0;
	char grade = 0;
	int i = 0;

	while (grade != 'x' && grade != 'X')
	{
		printf("Enter grade :");
		scanf("%c", &grade);
		getchar();

		if (grade != 'x' && grade != 'X')
		{
			switch (grade)
			{

			case'a':
			case'A':
				sumOfa++;
				break;

			case'b':
			case'B':
				sumOfb++;
				break;

			case'c':
			case'C':
				sumOfc++;
				break;

			case'd':
			case'D':
				sumOfd++;
				break;

			case'f':
			case'F':
				sumOff++;
				break;


			default:
				printf("Invalid input");


			}
		}



	}

	printf("Grade A is of %d students\n", sumOfa);
	printf("Grade B is of %d students\n", sumOfb);
	printf("Grade C is of %d students\n", sumOfc);
	printf("Grade D is of %d students\n", sumOfd);
	printf("Grade F is of %d students\n", sumOff);

	return 0;
}