//Program that prompts the user to input the masses of the bodies and the distance between the bodies.
//The program then outputs the force between the bodies.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	float force, k;
	int d, m1, m2;
	k = (6.67e-11);

	printf("Enter the mass of the first body:");
	scanf("%d", &m1);

	printf("Enter the mass of the second body:");
	scanf("%d", &m2);

	printf("The distance between the bodies is:");
	scanf("%d", &d);

	force = (k * m1 * m2) / (d * d);

	printf("Force is %.12lf", force);

	return 0;
}
