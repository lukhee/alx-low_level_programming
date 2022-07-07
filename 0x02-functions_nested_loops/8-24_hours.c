#include "main.h"

/**
 * jack_bauer -> check if the character is alphabet
 * Return: return  if  lower and 0 is nnot
 */

void jack_bauer(void)
{
	int x, i, j, k;

	for (x = 48; x <= 50; x++)
	{
		for (i = 48; i <= 57; i++)
		{
			for (j = 48; j <= 53; j++)
			{
				for (k = 48; k <= 57; k++)
				{
					if (x >= 50 && i >= 52)
						break;
					_putchar(x);
					_putchar(i);
					_putchar(58);
					_putchar(j);
					_putchar(k);
					_putchar('\n');
				}
			}
		}
	}
}
