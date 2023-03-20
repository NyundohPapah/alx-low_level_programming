#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit
 * Return: Always (Success)
 * 
 */

int main(void)
{
	int b, lastd;

	srand(time(0));
	b = rand() - RAND_MAX / 2;
	lastd = b % 10;

	if (lastd > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", b, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", b, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", b, lastd);
	}
	return (0);
