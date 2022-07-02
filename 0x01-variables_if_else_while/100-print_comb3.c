#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int alpha, n;
for (alpha = 48; alpha <= 57; alpha++)
{
	for (n = 49; n <= 57; n++)
	{
		if (n > alpha)
		{
			putchar(alpha);
			putchar(n);
			if (alpha != 56 || n != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
}
putchar(10);
return (0);
}
