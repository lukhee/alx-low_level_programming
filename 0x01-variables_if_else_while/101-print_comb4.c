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
int alpha, n, m;
for (alpha = 48; alpha <= 57; alpha++)
{
	for (n = 49; n <= 57; n++)
	{
		for (m = 50; m <= 57; m++)
		{	
			if (n > alpha && m > n)
			{
				putchar(alpha);
				putchar(n);
				putchar(m);
				if (alpha != 55 || n != 56 || m != 57)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
}
putchar(10);
return (0);
}
