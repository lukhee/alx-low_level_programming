#include "main.h"

/**
 * swap_int - swap 2 value
 * @a: as int
 * @b: as int
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int s = *a;

	*a = *b;
	*b = s;
}
