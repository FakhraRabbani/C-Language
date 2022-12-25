//prgrm that demonstrates function by calling it in a loop that passes values 1 through 10 as arguments and displays return value
//function returns distance covered in time
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
float fallingDistance(float time)
{
	float d, g = 9.8;
	d = 0.5 * g * (time * time);
	return d;
}
int main()
{
	float distance, time;

	for (time = 1; time <= 10; time++)
	{
		distance = fallingDistance(time);
		printf("The distance covered by object in %.1f seconds is %.2f\n", time, distance);
	}
	return 0;
}

