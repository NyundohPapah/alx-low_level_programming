#include "main.h"

/**
 * print_triangle - prints a triangle of squares fronm given parameters
 * @size: the size of the triangle squares
 * Return: empty
 */

void print_triangle(int size)

{
	int j, k, l;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			for (k = size - j; k > 1; k--)
			{
				_putchar(32);
			}
			for (l = 0; l <= j; l++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
