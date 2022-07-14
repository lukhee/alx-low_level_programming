#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: len
 */

int _strlen(char *s)
{
	int lngt = 0;

	while (*(s + lngt) != '\0')
		lngt++;
	return (lngt);
}
