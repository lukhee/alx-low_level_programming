#include "main.h"

/**
 * jack_bauer -> check if the character is alphabet
 * @n: a charaacter argument
 * Return: return  if  lower and 0 is nnot
 */

void jack_bauer(void)
{
	int x;
	int j;
	int i;

	for (x = 0; x < 24; x++)
	{
		for (i = 0; i < 60; i++)
		{
			for (j = 0; j  < 60; j++)
			{
				_putchar(x);
				_putchar(i);
				_putchar(':');
				if (j < 10)
				{
					_putchar(0);
				}
				_putchar(j);
			}
		}
	}
}
