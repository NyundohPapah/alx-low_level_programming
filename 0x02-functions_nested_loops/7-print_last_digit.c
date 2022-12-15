#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int c;

	c = n % 10;



	if (n < 0)
		n = -1;

	_putchar(c + '0');

	return (c);
}
