#include "main.h"

/**
 * _atoi - convert string to int
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	unsigned int c = 0, s = 0, oi = 0, pt = 1, m = 1, i;

	while (*(s + c) != '\0')
	{
		if (s > 0 && (*(s + c) < '0' || *(s + c) > '9'))
			break;

		if (*(s + c) == '-')
			pt *= -1;

		if ((*(s + c) >= '0') && (*(s + c) <= '9'))
		{
			if (s > 0)
				m *=10;
			s++;	
		}
		c++;
	}

	for (i = c - s; i < c; i++)
	{
		oi = oi + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (oi * pt);
}
