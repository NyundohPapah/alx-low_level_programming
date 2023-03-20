#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints if number is positive, zero or negative
 * Return: Alwaya (Success)
 *
 */

int main(void)
{
	int a;

	srand(time(0));
	a = rand() - RAND_MAX / 2;

	if (a > 0)
	{
		printf("%d is positive \n", a);
	}
	else if (a == 0)
	{
		printf("%d is zero \n", a);
	}
	else
	{
		printf("%d is negative \n", a);
	}
	return (0);
}
