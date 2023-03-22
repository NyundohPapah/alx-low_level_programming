#include "main.h"
/**
 * jack_bauer - prints 24 hours
 */
void jack_bauer(void)
{
	int j, k;

	for (j = 0; j < 24; j++)
	{
		for (k = 0; k < 60; k++)
		{
			_putchar('\n');
			if (j < 10)
			{
				_putchar('0');
				_putchar(j + '0');
			}
			else if (j >= 10)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			if (k < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(':');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
	}
}
