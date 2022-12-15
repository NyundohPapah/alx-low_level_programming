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
			if (j < 10)
			{
				putchar('0');
				putchar(j + '0');
			}
			else if (j >= 10)
			{
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
			}
			if (k < 10)
			{
				putchar(':');
				putchar('0');
				putchar(k + '0');
			}
			else if (k >= 10)
			{
				putchar(':');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
			}
			putchar('\n');
		}
	}
}
