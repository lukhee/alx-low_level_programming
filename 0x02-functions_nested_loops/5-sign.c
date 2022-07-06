#include "main.h"

/**
 * print_sign -> check if the character is alphabet
 * @c: a charaacter argument
 * Return: return  if  lower and 0 is nnot
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
