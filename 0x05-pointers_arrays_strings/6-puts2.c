#include "main.h"

/**
 * puts2 - print string from 1st character
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int l = 0;

	while (l >= 0)
	{
		if (str[l] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (l % 2 == 0)
		_putchar(str[l]);
		l++;
	}
}
