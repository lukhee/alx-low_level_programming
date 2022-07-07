#include "main.h"

/**
 * jack_bauer -> check if the character is alphabet
 * Return: return  if  lower and 0 is nnot
 */

void jack_bauer(void)
{
	int x, i, j;

	for (x = 0; x < 24; x++)
	{
		for (i = 0; i < 60; i++)
		{
			for (j = 0; j  < 60; j++)
			{
				_putchar(x + '0');
				_putchar(i + '0');
				_putchar(':');
				if (j < 10)
				{
					_putchar('0');
				}
				_putchar(j + '0');
				_putchar('\n');
			}
		}
	}
}
