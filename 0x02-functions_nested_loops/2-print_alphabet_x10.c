#include "main.h"

/**
 * print_alphabet -> print the lowercase alphabets
 */

void print_alphabet(void)
{
	int i , j;

	for (i = 0; i < 10; i++){
		{
			for (j = 'a'; j <= 'z'; j++)
			{
				_putchar(j);
			}
			_putchar('\n');
		}
}
