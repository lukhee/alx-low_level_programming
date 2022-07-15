#include "main.h"
#include <stdio.h>

/**
* _strncat - concatenates two string
* @dest: destination
* @src: source
* @n: amount of bytes
*
* Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c1 = 0, c2 = 0;

	while (*(dest + c1) != '\0')
	{
		c1++;
	}
	while (c2 < n)
	{
		*(dest + c1) = *(src + c2);
		if (*(src + c2) == '\0')
		break;
		c2++;
		c1++;
	}
	return (dest);
}
