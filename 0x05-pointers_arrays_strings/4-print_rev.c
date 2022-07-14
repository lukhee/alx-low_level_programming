#include "main.h"

/**
* print_rev - print reverse word
* @s: string
* Return: void
*/

void print_rev(char *s)
{
	int lngt = 0;

	while (lngt >= 0)
	{
		if (s[lngt] == '\0')
		break;
		lngt++;
	}

	for (lngt--; lngt >= 0; lngt--)
		_putchar(s[lngt]);
	_putchar('\n');
}
