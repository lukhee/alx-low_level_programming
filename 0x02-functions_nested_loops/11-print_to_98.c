#include <stdio.h>

/**
 * print_to_98 -> print n to 98
 * @n: n number of time
 * Return: return  if  lower and 0 is nnot
 */

void print_to_98(int n)
{
	int i;
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else 
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i)
		}
	}
}
