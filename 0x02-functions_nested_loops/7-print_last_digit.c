#include "main.h"

/**
 * print_last_digit -> check if the character is alphabet
 * @n: a charaacter argument
 * Return: return  if  lower and 0 is nnot
 */

int print_last_digit(int n)
{
	int x;
	x = n % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');
	return (x);
}
